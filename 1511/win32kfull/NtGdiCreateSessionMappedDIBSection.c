/*
 * XREFs of NtGdiCreateSessionMappedDIBSection @ 0x1C00F2500
 * Callers:
 *     <none>
 * Callees:
 *     bCaptureBitmapInfo @ 0x1C00352D4 (bCaptureBitmapInfo.c)
 *     GreGetBitmapBitsSize @ 0x1C004B524 (GreGetBitmapBitsSize.c)
 *     GreCreateDIBitmapReal @ 0x1C004B598 (GreCreateDIBitmapReal.c)
 */

__int64 __fastcall NtGdiCreateSessionMappedDIBSection(
        HDC a1,
        void *a2,
        unsigned int a3,
        char *a4,
        int a5,
        unsigned int a6,
        char a7,
        unsigned __int64 a8)
{
  __int64 DIBitmapReal; // rsi
  unsigned int *v12; // rdi
  __int64 v13; // rdx
  KPROCESSOR_MODE CurrentThreadPreviousMode; // al
  NTSTATUS v15; // eax
  signed int v16; // r12d
  PVOID v17; // r15
  unsigned int v18; // edx
  ULONG v20; // ecx
  unsigned int *v21; // [rsp+70h] [rbp-58h] BYREF
  PVOID MappedBase; // [rsp+78h] [rbp-50h] BYREF
  unsigned __int64 v23; // [rsp+80h] [rbp-48h] BYREF
  PVOID Object; // [rsp+88h] [rbp-40h] BYREF
  __int64 v25; // [rsp+90h] [rbp-38h]
  unsigned int BitmapBitsSize; // [rsp+D8h] [rbp+10h]

  DIBitmapReal = 0LL;
  v23 = 0LL;
  v21 = 0LL;
  MappedBase = 0LL;
  if ( !a2 || !a4 )
  {
    v20 = 87;
    goto LABEL_21;
  }
  if ( PsGetCurrentProcessId() != (HANDLE)gpidLogon )
  {
    v20 = 5;
LABEL_21:
    EngSetLastError(v20);
    return 0LL;
  }
  bCaptureBitmapInfo(a4, a5, a6, &v21);
  v12 = v21;
  if ( v21 )
  {
    BitmapBitsSize = GreGetBitmapBitsSize((__int64)v21);
    v13 = BitmapBitsSize;
    v23 = BitmapBitsSize;
    if ( BitmapBitsSize )
    {
      v21 = (unsigned int *)(a3 & 0xFFFF0000);
      v25 = (unsigned __int16)a3;
      v23 = (unsigned __int16)a3 + (unsigned __int64)BitmapBitsSize;
      CurrentThreadPreviousMode = PsGetCurrentThreadPreviousMode();
      v15 = ObReferenceObjectByHandle(a2, 4u, MmSectionObjectType, CurrentThreadPreviousMode, &Object, 0LL);
      v16 = v15;
      v17 = Object;
      if ( v15 < 0 )
      {
        EngSetLastError(v15);
      }
      else
      {
        v16 = MmMapViewInSessionSpaceEx(Object, &MappedBase, &v23, &v21, 0LL);
        ObfDereferenceObject(v17);
        v17 = 0LL;
      }
      if ( v16 < 0 )
        EngSetLastError(v16);
      else
        DIBitmapReal = GreCreateDIBitmapReal(
                         a1,
                         v18,
                         (char *)MappedBase + v25,
                         v12,
                         a5,
                         a6,
                         BitmapBitsSize,
                         a2,
                         a3,
                         0LL,
                         a7 & 4 | 0xAu,
                         a8,
                         0LL);
      if ( !DIBitmapReal )
      {
        EngSetLastError(0x57u);
        if ( MappedBase )
          MmUnmapViewInSessionSpace(MappedBase);
        if ( v17 )
          ObfDereferenceObject(v17);
      }
    }
    FreeThreadBufferWithTag(v12, v13);
  }
  return DIBitmapReal;
}
