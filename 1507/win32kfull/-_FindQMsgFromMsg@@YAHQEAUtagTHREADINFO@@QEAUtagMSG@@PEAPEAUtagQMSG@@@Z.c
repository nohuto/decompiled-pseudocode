/*
 * XREFs of ?_FindQMsgFromMsg@@YAHQEAUtagTHREADINFO@@QEAUtagMSG@@PEAPEAUtagQMSG@@@Z @ 0x1C01E1E2C
 * Callers:
 *     ?_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x1C00FB698 (-_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 */

__int64 __fastcall _FindQMsgFromMsg(struct tagTHREADINFO *const a1, struct tagMSG *const a2, struct tagQMSG **a3)
{
  __int64 *v3; // r9

  v3 = (__int64 *)**((_QWORD **)a1 + 49);
  if ( v3 )
  {
    while ( *((_DWORD *)v3 + 4) != (unsigned __int64)(unsigned int)*(_QWORD *)a2
         || *((_DWORD *)v3 + 6) != *((_DWORD *)a2 + 2)
         || v3[4] != *((_QWORD *)a2 + 2)
         || v3[8] != *((_QWORD *)a2 + 3)
         || *((_DWORD *)v3 + 12) != *((_DWORD *)a2 + 8)
         || *((_DWORD *)v3 + 13) != *((_DWORD *)a2 + 9)
         || *((_DWORD *)v3 + 14) != *((_DWORD *)a2 + 10) )
    {
      if ( (*((_DWORD *)v3 + 23) & 0x100) == 0 )
      {
        v3 = (__int64 *)*v3;
        if ( v3 )
          continue;
      }
      goto LABEL_11;
    }
    if ( (*((_DWORD *)v3 + 23) & 0x100) != 0 )
      *a3 = (struct tagQMSG *)v3;
    else
      *a3 = (struct tagQMSG *)*v3;
    return 1LL;
  }
  else
  {
LABEL_11:
    UserSetLastError(87);
    return 0LL;
  }
}
