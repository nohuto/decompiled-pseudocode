/*
 * XREFs of ?GetDisplayIndexFromDisplayId@CDisplaySet@@QEBAJVDisplayId@@PEAI@Z @ 0x1800553D8
 * Callers:
 *     ?GetDisplayPixelFormat@CDisplaySet@@QEBA?AW4DXGI_FORMAT@@VDisplayId@@@Z @ 0x180054DD0 (-GetDisplayPixelFormat@CDisplaySet@@QEBA-AW4DXGI_FORMAT@@VDisplayId@@@Z.c)
 *     ?GetDisplay@CDisplaySet@@QEBAJVDisplayId@@PEAPEBVCDisplay@@@Z @ 0x1800DEBBC (-GetDisplay@CDisplaySet@@QEBAJVDisplayId@@PEAPEBVCDisplay@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDisplaySet::GetDisplayIndexFromDisplayId(__int64 a1, int a2, unsigned int *a3)
{
  unsigned int v3; // r10d
  unsigned int v4; // ebx
  unsigned int v5; // r9d

  v3 = *(_DWORD *)(a1 + 72);
  v4 = 0;
  v5 = 0;
  if ( v3 )
  {
    while ( a2 != *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL * v5) + 152LL) + 852LL) )
    {
      if ( ++v5 >= v3 )
        goto LABEL_6;
    }
    *a3 = v5;
  }
LABEL_6:
  if ( *a3 >= v3 )
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x248u);
  }
  return v4;
}
