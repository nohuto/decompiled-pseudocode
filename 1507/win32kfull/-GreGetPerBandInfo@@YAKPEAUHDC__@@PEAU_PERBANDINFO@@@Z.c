/*
 * XREFs of ?GreGetPerBandInfo@@YAKPEAUHDC__@@PEAU_PERBANDINFO@@@Z @ 0x1C0268CF0
 * Callers:
 *     NtGdiGetPerBandInfo @ 0x1C026B1A0 (NtGdiGetPerBandInfo.c)
 * Callees:
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C00199F4 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetPerBandInfo(HDC a1, struct _PERBANDINFO *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 (__fastcall *v6)(__int64, struct _PERBANDINFO *); // rax
  _QWORD v8[7]; // [rsp+20h] [rbp-38h] BYREF

  a2->bRepeatThisBand = 0;
  v3 = -1;
  DCOBJ::DCOBJ((DCOBJ *)v8, a1);
  if ( (unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v8) )
  {
    v4 = *(_QWORD *)(v8[0] + 512LL);
    if ( v4 )
    {
      v5 = *(_QWORD *)(v8[0] + 48LL);
      if ( *(_QWORD *)(v5 + 2584) )
      {
        if ( (*(_DWORD *)(v4 + 112) & 0x2000000) != 0 )
        {
          v6 = *(__int64 (__fastcall **)(__int64, struct _PERBANDINFO *))(v5 + 3320);
          if ( v6 )
          {
            v3 = v6(v4 + 24, a2);
            if ( v3 == -1 )
              v3 = -1;
          }
          else
          {
            v3 = 0;
          }
        }
      }
    }
  }
  DCOBJ::~DCOBJ((DCOBJ *)v8);
  return v3;
}
