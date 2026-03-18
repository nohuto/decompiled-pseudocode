/*
 * XREFs of NtGdiSetDIBitsToDeviceInternal @ 0x140078CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z @ 0x140078B3C (-GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z.c)
 *     ?GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIHPEAX@Z @ 0x140078F30 (-GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIH.c)
 *     ?init_probe@?$umptr_r@E@@SA?AV1@PEAE_K1@Z @ 0x140079040 (-init_probe@-$umptr_r@E@@SA-AV1@PEAE_K1@Z.c)
 */

__int64 __fastcall NtGdiSetDIBitsToDeviceInternal(
        HDC a1,
        __int64 a2,
        __int64 biSize,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        const void *a11,
        char a12,
        unsigned int a13,
        unsigned int a14,
        int a15,
        __int64 a16)
{
  unsigned int v16; // esi
  const struct tagBITMAPINFO *v17; // rbx
  int v18; // r15d
  struct tagBITMAPINFO *v19; // rax
  __int64 inited; // rax
  __int64 v22; // [rsp+90h] [rbp-78h] BYREF
  __int64 v23; // [rsp+98h] [rbp-70h]
  __int64 v24; // [rsp+A0h] [rbp-68h]
  __int16 v25; // [rsp+A8h] [rbp-60h]
  _BYTE v26[88]; // [rsp+B0h] [rbp-58h] BYREF

  v16 = 1;
  v17 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0;
  v18 = a12 & 3;
  if ( a14 < 4 )
    goto LABEL_9;
  if ( !a11 )
    goto LABEL_9;
  if ( a14 > 0x2710000 )
    goto LABEL_9;
  v19 = (struct tagBITMAPINFO *)AllocThreadBufferWithTag(a14, 1886221383LL, 0LL);
  v17 = v19;
  if ( !v19 )
    goto LABEL_9;
  GreProbeAndReadFromUntrustedVa(v19, a14, a11, a14, 1uLL);
  biSize = v17->bmiHeader.biSize;
  if ( a14 < (unsigned int)biSize
    || (unsigned int)biSize < 0x28
    || a14 != (unsigned int)GreGetBitmapSizeInternal(v17, v18, biSize) )
  {
    FreeThreadBufferWithTag(v17, a2, biSize);
    v17 = 0LL;
LABEL_9:
    v16 = 0;
  }
  if ( v16 == 1 )
  {
    a2 = a10;
    if ( a10 )
    {
      inited = umptr_r<unsigned char>::init_probe(v26, a10, a13, 4LL);
      v22 = *(_QWORD *)inited;
      v23 = *(_QWORD *)(inited + 8);
      v24 = *(_QWORD *)(inited + 16);
      v25 = *(_WORD *)(inited + 24);
      a2 = -v22;
      v16 = v22 != 0;
    }
    if ( v16 == 1 )
      v16 = GreSetDIBitsToDeviceInternalImpl(a1, a5, a6, a7, a8, a9, (__int64)&v22, (__int64)v17, v18, a14, a15, a16);
  }
  if ( v17 )
    FreeThreadBufferWithTag(v17, a2, biSize);
  return v16;
}
