/*
 * XREFs of xxxImmProcessKey @ 0x1C0081D4C
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0061810 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     _PostMessage @ 0x1C0078490 (_PostMessage.c)
 *     CheckImeHotKey @ 0x1C0081ED4 (CheckImeHotKey.c)
 *     GetAppImeCompatFlags @ 0x1C0082004 (GetAppImeCompatFlags.c)
 *     ClientImmProcessKey @ 0x1C0082024 (ClientImmProcessKey.c)
 */

__int64 __fastcall xxxImmProcessKey(__int64 a1, __int64 a2, int a3, unsigned __int16 a4, __int64 a5)
{
  int v8; // edi
  __int64 v9; // rsi
  int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  int v16; // ecx
  unsigned __int8 v17; // cf
  int v18; // ecx
  unsigned int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9

  if ( ((a3 - 256) & 0xFFFFFFFA) != 0 )
    return 0LL;
  v8 = 0;
  v9 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 392LL);
  if ( !v9 )
    return 0LL;
  v10 = (unsigned __int8)a4;
  v11 = CheckImeHotKey(a1, (unsigned __int8)a4, a5);
  v12 = 0xFFFFFFFFLL;
  if ( v11 )
  {
    v13 = *(unsigned int *)(v11 + 8);
    v14 = *(_QWORD *)(v11 + 24);
  }
  else
  {
    v13 = 0xFFFFFFFFLL;
    v14 = 0LL;
  }
  if ( (unsigned int)(v13 - 256) > 0x1F )
  {
    if ( (*gpsi & 4) != 0 )
    {
      if ( (_DWORD)v13 != -1 )
        goto LABEL_20;
      v15 = *(_QWORD *)(v9 + 80);
      if ( v15
        && *(_QWORD *)(*((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)*(_DWORD *)(a2 + 248)
                     + *((_QWORD *)&gSharedInfo + 1))
        && ((a5 & 0x80000000) == 0 || (*(_DWORD *)(v15 + 12) & 4) == 0) )
      {
        if ( (unsigned int)(v10 - 241) > 0xA || (v16 = 1779, v17 = _bittest(&v16, v10 - 241), v18 = 1, !v17) )
          v18 = 0;
        if ( ((unsigned int)(a3 - 260) > 1 || v10 == 18 || v10 == 121 || v18)
          && ((*(_DWORD *)(v15 + 12) & 8) != 0 || v18 || v10 != 18 && (a5 & 0x20000000) == 0) )
        {
LABEL_20:
          if ( (_BYTE)v10 == 0xE7 )
            v10 = a4 | (*(unsigned __int16 *)(gptiCurrent + 754LL) << 16);
          v19 = ClientImmProcessKey(*(_QWORD *)a2, *(_QWORD *)(v9 + 40), v10, a5, v13);
          if ( (GetAppImeCompatFlags(*(_QWORD *)(a2 + 16), v20, v21, v22) & 0x800000) != 0 )
            v19 &= ~1u;
          return v19;
        }
      }
    }
    return 0LL;
  }
  if ( *(_QWORD *)(v9 + 40) != v14 )
  {
    LOBYTE(v8) = (*(_DWORD *)(v9 + 64) & gSystemFS) != 0;
    PostMessage(a2, 80LL, v8, v14);
  }
  return (GetAppImeCompatFlags(*(_QWORD *)(a2 + 16), v12, v13, v14) & 0x800000) == 0;
}
