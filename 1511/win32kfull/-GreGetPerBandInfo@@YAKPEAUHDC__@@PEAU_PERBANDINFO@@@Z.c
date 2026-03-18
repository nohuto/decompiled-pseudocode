/*
 * XREFs of ?GreGetPerBandInfo@@YAKPEAUHDC__@@PEAU_PERBANDINFO@@@Z @ 0x1C026798C
 * Callers:
 *     NtGdiGetPerBandInfo @ 0x1C0269D20 (NtGdiGetPerBandInfo.c)
 * Callees:
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C002D65C (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreGetPerBandInfo(HDC a1, struct _PERBANDINFO *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 (__fastcall *v6)(__int64, struct _PERBANDINFO *); // rax
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

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
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v8);
  return v3;
}
