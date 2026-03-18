/*
 * XREFs of NtGdiStretchDIBitsInternal @ 0x14007C4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?init_probe@?$umptr_r@E@@SA?AV1@PEAE_K1@Z @ 0x140079040 (-init_probe@-$umptr_r@E@@SA-AV1@PEAE_K1@Z.c)
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x14007C6DC (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     ?bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z @ 0x14007DFBC (-bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z.c)
 */

__int64 __fastcall NtGdiStretchDIBitsInternal(
        HDC a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        volatile void *a10,
        struct tagBITMAPINFO *a11,
        unsigned int a12,
        int a13,
        unsigned int a14,
        unsigned int a15,
        __int64 a16)
{
  unsigned int v17; // edi
  __int64 inited; // rax
  __int64 v20; // [rsp+88h] [rbp-80h] BYREF
  __int64 v21; // [rsp+90h] [rbp-78h] BYREF
  __int64 v22; // [rsp+98h] [rbp-70h]
  __int64 v23; // [rsp+A0h] [rbp-68h]
  __int16 v24; // [rsp+A8h] [rbp-60h]
  _BYTE v25[88]; // [rsp+B0h] [rbp-58h] BYREF

  v20 = 0LL;
  v17 = 1;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0;
  if ( a10 )
  {
    if ( a11 )
    {
      a3 = a14;
      if ( a14 )
      {
        v17 = bCaptureBitmapInfo(a11, a12, a14, (struct tagBITMAPINFO **)&v20) != 0;
        if ( !v17 )
          goto LABEL_8;
        inited = umptr_r<unsigned char>::init_probe((__int64)v25, a10, a15, 4u);
        v21 = *(_QWORD *)inited;
        v22 = *(_QWORD *)(inited + 8);
        v23 = *(_QWORD *)(inited + 16);
        v24 = *(_WORD *)(inited + 24);
        a2 = -v21;
        v17 &= -(v21 != 0);
      }
    }
  }
  if ( v17 )
    v17 = GreStretchDIBitsInternalImpl(a1, a5, a6, a7, a8, a9, (__int64)&v21, v20, a12, a13, a14, a16);
LABEL_8:
  if ( v20 )
    FreeThreadBufferWithTag(v20, a2, a3);
  return v17;
}
