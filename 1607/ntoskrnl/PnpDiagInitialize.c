/*
 * XREFs of PnpDiagInitialize @ 0x14079CC74
 * Callers:
 *     IopInitializePlugPlayServices @ 0x14079CCD4 (IopInitializePlugPlayServices.c)
 * Callees:
 *     McGenEventRegister @ 0x14013C92C (McGenEventRegister.c)
 *     EtwRegister @ 0x14054A484 (EtwRegister.c)
 */

__int64 __fastcall PnpDiagInitialize(__int64 a1, ETWENABLECALLBACK *a2)
{
  signed int v2; // eax
  unsigned int v3; // ebx
  NTSTATUS v4; // eax

  v2 = McGenEventRegister(
         &MS_KernelPnP_Provider,
         a2,
         &MS_KernelPnP_Provider_Context,
         &Microsoft_Windows_Kernel_PnPHandle);
  v3 = 0;
  PnpEtwHandle = Microsoft_Windows_Kernel_PnPHandle;
  if ( v2 < 0 )
    v3 = v2;
  v4 = EtwRegister(
         &MS_KernelPnP_Rundown_Provider,
         (PETWENABLECALLBACK)PnpDiagRundownRegisterCallback,
         0LL,
         &PnpRundownEtwHandle);
  if ( v4 < 0 )
    return (unsigned int)v4;
  return v3;
}
