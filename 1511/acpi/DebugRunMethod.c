/*
 * XREFs of DebugRunMethod @ 0x1C0043910
 * Callers:
 *     <none>
 * Callees:
 *     AsyncEvalObject @ 0x1C0002000 (AsyncEvalObject.c)
 *     GetObjectPath @ 0x1C00057B4 (GetObjectPath.c)
 *     DereferenceObjectEx @ 0x1C00138E4 (DereferenceObjectEx.c)
 *     GetBaseObject @ 0x1C0016AE0 (GetBaseObject.c)
 *     _strtoui64_0 @ 0x1C0024C9E (_strtoui64_0.c)
 *     memset @ 0x1C00251C0 (memset.c)
 *     ConPrintf @ 0x1C004334C (ConPrintf.c)
 *     DebugExpr @ 0x1C00433B8 (DebugExpr.c)
 *     IsNumber @ 0x1C0043C90 (IsNumber.c)
 *     RunMethodCallBack @ 0x1C0043F10 (RunMethodCallBack.c)
 *     PrintDebugMessage @ 0x1C00453F0 (PrintDebugMessage.c)
 */

__int64 __fastcall DebugRunMethod(__int64 a1, char *a2)
{
  unsigned int v2; // edi
  __int64 v4; // rdx
  __int64 v5; // rbx
  unsigned int v6; // eax
  unsigned int v7; // ebx
  __int64 ObjectPath; // rax
  __int64 *v9; // rdx
  void *v10; // rbx
  unsigned __int64 v12[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  v13 = a1;
  v2 = 0;
  if ( fRunningMethod )
  {
    PrintDebugMessage(235, 0, 0, 0, 0LL);
LABEL_3:
    v2 = -4;
LABEL_27:
    dword_1C0058E20 = -1;
    return v2;
  }
  if ( a2 )
  {
    if ( dword_1C0058E20 != -1 )
    {
      if ( dword_1C0058E20 >= 7 )
      {
        PrintDebugMessage(236, 0, 0, 0, 0LL);
      }
      else
      {
        memset((char *)&unk_1C005AC40 + 40 * dword_1C0058E20, 0, 0x28uLL);
        if ( (unsigned __int8)IsNumber(a2, 0LL) )
        {
          v5 = 5LL * dword_1C0058E20;
          *((_QWORD *)&unk_1C005AC40 + v5 + 2) = strtoui64_0(a2, 0LL, 16);
          ++dword_1C0058E20;
          *((_WORD *)&unk_1C005AC40 + 4 * v5 + 1) = 1;
          return v2;
        }
        PrintDebugMessage(218, (_DWORD)a2, 0, 0, 0LL);
      }
      v2 = -2;
      goto LABEL_27;
    }
    v2 = DebugExpr(a2, v12, &v13);
    if ( v2 )
      goto LABEL_27;
    if ( !v13 )
    {
      PrintDebugMessage(232, 0, 0, 0, 0LL);
      goto LABEL_3;
    }
    qword_1C005AD58 = GetBaseObject(v13);
    DereferenceObjectEx(v4);
    dword_1C0058E20 = 0;
  }
  else
  {
    if ( dword_1C0058E20 < 0 )
    {
      PrintDebugMessage(226, 0, 0, 0, 0LL);
      v2 = -4;
    }
    else
    {
      memset(&unk_1C005ADB0, 0, 0x28uLL);
      fRunningMethod = 1;
      v6 = AsyncEvalObject(
             qword_1C005AD58,
             (_SLIST_ENTRY *)&unk_1C005ADB0,
             dword_1C0058E20,
             (__int64)&unk_1C005AC40,
             (__int64)RunMethodCallBack,
             0LL,
             1);
      v7 = v6;
      if ( v6 == 32772 )
      {
        ObjectPath = GetObjectPath(qword_1C005AD58);
        v9 = qword_1C00254F0;
        v10 = (void *)ObjectPath;
        if ( ObjectPath )
          v9 = (__int64 *)ObjectPath;
        ConPrintf("\n%s returned PENDING\n", v9);
        if ( v10 )
          ExFreePoolWithTag(v10, 0);
      }
      else
      {
        RunMethodCallBack(qword_1C005AD58 + 112, v6, &unk_1C005ADB0, 0LL);
        if ( v7 )
          v2 = -4;
      }
      DereferenceObjectEx(qword_1C005AD58);
      qword_1C005AD58 = 0LL;
      dword_1C0058E20 = -1;
    }
    if ( v2 )
      goto LABEL_27;
  }
  return v2;
}
