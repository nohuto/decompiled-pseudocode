/*
 * XREFs of ?_SqmEdgy@Edgy@@YAXAEBUtagEDGY_DATA@@AEBUtagARC_DATA@1@H@Z @ 0x1C0229F40
 * Callers:
 *     ?_OnEnterActive@Edgy@@YAXAEAUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z @ 0x1C0229C80 (-_OnEnterActive@Edgy@@YAXAEAUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z.c)
 *     ?_OnStateTransition@Edgy@@YAPEBUtagPOINTERINPUTFRAME@@AEAUtagEDGY_DATA@@W4tagEDGY_STATE@@AEBUtagARC_DATA@1@@Z @ 0x1C0229E54 (-_OnStateTransition@Edgy@@YAPEBUtagPOINTERINPUTFRAME@@AEAUtagEDGY_DATA@@W4tagEDGY_STATE@@AEBUtag.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

void __fastcall Edgy::_SqmEdgy(Edgy *this, const struct tagEDGY_DATA *a2, const struct Edgy::tagARC_DATA *a3)
{
  int v3; // ebp
  int v4; // esi
  BOOL v5; // edi
  int v6; // ebx
  _DWORD v7[12]; // [rsp+30h] [rbp-48h] BYREF

  if ( gSqmIsOptedIn )
  {
    v3 = *((_DWORD *)a2 + 6);
    v4 = *((_DWORD *)a2 + 12) - *((_DWORD *)this + 50);
    v5 = (_DWORD)a3 != 0;
    v6 = 0;
    if ( *((_DWORD *)this + 4) == 1 )
      v6 = 2;
    memset(&v7[1], 0, 0x2CuLL);
    v7[2] = v3;
    v7[0] = 16;
    v7[1] = 1;
    v7[4] = 16;
    v7[6] = v5 | v6;
    v7[5] = 1;
    v7[8] = 16;
    v7[10] = v4;
    v7[9] = 1;
    WinSqmAddToStreamEx(0LL, 8509LL, 3LL, v7, 0);
  }
}
