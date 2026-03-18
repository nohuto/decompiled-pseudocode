/*
 * XREFs of xxxImmProcessKey @ 0x1C0047818
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00724A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     CheckImeHotKey @ 0x1C00479A0 (CheckImeHotKey.c)
 *     GetAppImeCompatFlags @ 0x1C0047AD0 (GetAppImeCompatFlags.c)
 *     ClientImmProcessKey @ 0x1C0047AF0 (ClientImmProcessKey.c)
 *     _PostMessage @ 0x1C007B0C0 (_PostMessage.c)
 */

__int64 __fastcall xxxImmProcessKey(__int64 a1, __int64 a2, int a3, unsigned __int16 a4, __int64 a5)
{
  __int64 v8; // rsi
  int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // r8d
  __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // ecx
  unsigned __int8 v16; // cf
  int v17; // ecx
  unsigned int v18; // ebx
  __int64 v19; // rdx

  if ( ((a3 - 256) & 0xFFFFFFFA) != 0 )
    return 0LL;
  v8 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 400LL);
  if ( !v8 )
    return 0LL;
  v9 = (unsigned __int8)a4;
  v10 = CheckImeHotKey(a1, (unsigned __int8)a4, a5);
  v11 = 0xFFFFFFFFLL;
  if ( v10 )
  {
    v12 = *(_DWORD *)(v10 + 8);
    v13 = *(_QWORD *)(v10 + 24);
  }
  else
  {
    v12 = -1;
    v13 = 0LL;
  }
  if ( (unsigned int)(v12 - 256) > 0x1F )
  {
    if ( (*gpsi & 4) != 0 )
    {
      if ( v12 != -1 )
        goto LABEL_20;
      v14 = *(_QWORD *)(v8 + 80);
      if ( v14
        && *(_QWORD *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)(a2 + 248) + gSharedInfo[1])
        && ((a5 & 0x80000000) == 0 || (*(_DWORD *)(v14 + 12) & 4) == 0) )
      {
        if ( (unsigned int)(v9 - 241) > 0xA || (v15 = 1779, v16 = _bittest(&v15, v9 - 241), v17 = 1, !v16) )
          v17 = 0;
        if ( ((unsigned int)(a3 - 260) > 1 || v9 == 18 || v9 == 121 || v17)
          && ((*(_DWORD *)(v14 + 12) & 8) != 0 || v17 || v9 != 18 && (a5 & 0x20000000) == 0) )
        {
LABEL_20:
          if ( (_BYTE)v9 == 0xE7 )
            v9 = a4 | (*(unsigned __int16 *)(gptiCurrent + 762LL) << 16);
          v18 = ClientImmProcessKey(*(_QWORD *)a2, *(_QWORD *)(v8 + 40), v9, a5, v12);
          if ( (GetAppImeCompatFlags(*(_QWORD *)(a2 + 16), v19) & 0x800000) != 0 )
            v18 &= ~1u;
          return v18;
        }
      }
    }
    return 0LL;
  }
  if ( *(_QWORD *)(v8 + 40) != v13 )
    PostMessage(a2, 80LL);
  return (GetAppImeCompatFlags(*(_QWORD *)(a2 + 16), v11) & 0x800000) == 0;
}
