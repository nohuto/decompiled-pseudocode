/*
 * XREFs of ?Create@CSemaphore@DirectComposition@@SAJPEAPEAV12@@Z @ 0x1C002405C
 * Callers:
 *     ?Initialize@CApplicationChannel@DirectComposition@@MEAAJXZ @ 0x1C002FB70 (-Initialize@CApplicationChannel@DirectComposition@@MEAAJXZ.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C0024780 (Win32AllocPoolNonPaged.c)
 */

__int64 __fastcall DirectComposition::CSemaphore::Create(struct DirectComposition::CSemaphore **a1)
{
  unsigned int v2; // ebx
  struct _KSEMAPHORE *v3; // rax
  struct DirectComposition::CSemaphore *v4; // rdi

  v2 = 0;
  v3 = (struct _KSEMAPHORE *)Win32AllocPoolNonPaged(32LL, 1869824836LL);
  v4 = (struct DirectComposition::CSemaphore *)v3;
  if ( v3 )
    KeInitializeSemaphore(v3, 0, 0x7FFFFFFF);
  else
    v4 = 0LL;
  if ( v4 )
    *a1 = v4;
  else
    return (unsigned int)-1073741801;
  return v2;
}
