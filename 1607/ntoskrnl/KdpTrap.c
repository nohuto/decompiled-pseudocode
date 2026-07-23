/*
 * XREFs of KdpTrap @ 0x1406F312C
 * Callers:
 *     KdTrap @ 0x1400ACD48 (KdTrap.c)
 *     KiDispatchException @ 0x1400F1BB0 (KiDispatchException.c)
 *     KdpStub @ 0x1400F45F4 (KdpStub.c)
 * Callees:
 *     KdpReport @ 0x1400F4360 (KdpReport.c)
 *     KdpSymbol @ 0x1406F227C (KdpSymbol.c)
 *     KdpPrint @ 0x1406F2E34 (KdpPrint.c)
 *     KdpCommandString @ 0x1406F3C28 (KdpCommandString.c)
 *     KdpPrompt @ 0x1406F5E00 (KdpPrompt.c)
 */

char KdpTrap(__int64 a1, _DWORD a2, __int64 a3, __int64 a4, char a5, char a6, ...)
{
  char v6; // dl
  bool v8; // zf
  unsigned __int64 v10; // rax
  __int64 v11; // rdi
  int v12; // eax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rax
  int v16; // eax
  int v17; // eax
  int v18; // [rsp+20h] [rbp-28h]
  int v19; // [rsp+30h] [rbp-18h]
  char v20; // [rsp+60h] [rbp+18h] BYREF

  v6 = 0;
  v8 = *(_DWORD *)a3 == -2147483645;
  v20 = 0;
  if ( !v8 )
    return KdpReport(a1, 0LL, (int *)a3, a4, v18, a6);
  v10 = *(_QWORD *)(a3 + 32);
  if ( !v10 )
    return KdpReport(a1, 0LL, (int *)a3, a4, v18, a6);
  v11 = *(_QWORD *)(a4 + 248);
  if ( v10 <= 5 )
  {
    v12 = v10 - 1;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( !v13 )
      {
        *(_QWORD *)(a4 + 120) = (unsigned __int16)KdpPrompt(
                                                    *(_QWORD *)(a4 + 128),
                                                    *(unsigned __int16 *)(a4 + 136),
                                                    *(_QWORD *)(a4 + 184),
                                                    *(unsigned __int16 *)(a4 + 192),
                                                    a5,
                                                    a1);
        goto LABEL_10;
      }
      v14 = v13 - 1;
      if ( !v14 )
        goto LABEL_9;
      v16 = v14 - 1;
      if ( !v16 )
      {
        v6 = 1;
LABEL_9:
        KdpSymbol(*(_QWORD *)(a4 + 128), *(_QWORD *)(a4 + 136), v6, a5, a4, a1);
LABEL_10:
        v6 = 1;
        goto LABEL_11;
      }
      if ( v16 == 1 )
      {
        LOBYTE(a3) = a5;
        KdpCommandString(*(_QWORD *)(a4 + 128), *(_QWORD *)(a4 + 136), a3, a4, a1);
        goto LABEL_10;
      }
    }
    else
    {
      v17 = KdpPrint(
              *(_DWORD *)(a4 + 184),
              *(_DWORD *)(a4 + 192),
              *(char **)(a4 + 128),
              *(_WORD *)(a4 + 136),
              a5,
              a1,
              v19,
              &v20);
      v6 = v20;
      *(_QWORD *)(a4 + 120) = v17;
    }
  }
LABEL_11:
  v15 = *(_QWORD *)(a4 + 248);
  if ( v15 == v11 )
    *(_QWORD *)(a4 + 248) = v15 + 1;
  return v6;
}
