/*
 * XREFs of ??$LogMPCInputReport@AEAPEAUInputInfo@@@ISMTracing@@SAXAEAPEAUInputInfo@@@Z @ 0x180046960
 * Callers:
 *     ?Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180045950 (-Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?Process2DInput@MPCProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800472D0 (-Process2DInput@MPCProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?hfxOnInputReport@MPCProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180047310 (-hfxOnInputReport@MPCProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?hydroOnInputReport@MPCProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180047480 (-hydroOnInputReport@MPCProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?hfxOnInputReport@MPCClickerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x18004949C (-hfxOnInputReport@MPCClickerProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?hydroOnInputReport@MPCClickerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180049670 (-hydroOnInputReport@MPCClickerProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180043FD0 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?LogMPCGenericInputReport@ISMTracing@@SAXPEAUInputInfo@@@Z @ 0x1800442B0 (-LogMPCGenericInputReport@ISMTracing@@SAXPEAUInputInfo@@@Z.c)
 */

void __fastcall ISMTracing::LogMPCInputReport<InputInfo * &>(__int64 *a1)
{
  _DWORD *v2; // rdx
  __int64 v3; // rbx
  __int64 v4; // rcx
  int v5; // eax

  v2 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v2 )
  {
    if ( *v2 )
    {
      v3 = *a1;
      ISMTracing::Instance();
      v4 = *((_QWORD *)ISMTracing::Instance() + 1);
      if ( *(_DWORD *)v4 > 5u && (*(_BYTE *)(v4 + 16) & 1) != 0 && (*(_QWORD *)(v4 + 24) & 1LL) == *(_QWORD *)(v4 + 24) )
      {
        v5 = *(_DWORD *)(v3 + 704);
        if ( v5 > 0 )
        {
          if ( v5 <= 6 )
          {
            ISMTracing::LogMPCHandInputReport((struct InputInfo *)v3);
            return;
          }
          if ( v5 == 7 )
          {
            ISMTracing::LogMPCVoiceInputReport((struct InputInfo *)v3);
            return;
          }
        }
        ISMTracing::LogMPCGenericInputReport((struct InputInfo *)v3);
      }
    }
  }
}
