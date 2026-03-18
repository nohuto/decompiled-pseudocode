/*
 * XREFs of DebugRunMethod @ 0x1C005AFE0
 * Callers:
 *     <none>
 * Callees:
 *     AsyncEvalObject @ 0x1C0001AD0 (AsyncEvalObject.c)
 *     GetObjectPath @ 0x1C0005860 (GetObjectPath.c)
 *     DereferenceObjectEx @ 0x1C0019F6C (DereferenceObjectEx.c)
 *     GetBaseObject @ 0x1C001EDC0 (GetBaseObject.c)
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     _strtoui64_0 @ 0x1C002BC6E (_strtoui64_0.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     ConPrintf @ 0x1C005AA1C (ConPrintf.c)
 *     DebugExpr @ 0x1C005AA88 (DebugExpr.c)
 *     IsNumber @ 0x1C005B360 (IsNumber.c)
 *     RunMethodCallBack @ 0x1C005B570 (RunMethodCallBack.c)
 */

__int64 __fastcall DebugRunMethod(__int64 a1, char *a2)
{
  unsigned int v2; // edi
  _QWORD *v4; // rdx
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
    PrintDebugMessage(235, 0LL, 0LL, 0LL, 0LL);
LABEL_3:
    v2 = -4;
LABEL_27:
    dword_1C00734C0 = -1;
    return v2;
  }
  if ( a2 )
  {
    if ( dword_1C00734C0 != -1 )
    {
      if ( dword_1C00734C0 >= 7 )
      {
        PrintDebugMessage(236, 0LL, 0LL, 0LL, 0LL);
      }
      else
      {
        memset((char *)&unk_1C00750D0 + 40 * dword_1C00734C0, 0, 0x28uLL);
        if ( (unsigned __int8)IsNumber(a2, 0LL) )
        {
          v5 = 5LL * dword_1C00734C0;
          *((_QWORD *)&unk_1C00750D0 + v5 + 2) = strtoui64_0(a2, 0LL, 16);
          ++dword_1C00734C0;
          *((_WORD *)&unk_1C00750D0 + 4 * v5 + 1) = 1;
          return v2;
        }
        PrintDebugMessage(218, a2, 0LL, 0LL, 0LL);
      }
      v2 = -2;
      goto LABEL_27;
    }
    v2 = DebugExpr(a2, v12, &v13);
    if ( v2 )
      goto LABEL_27;
    if ( !v13 )
    {
      PrintDebugMessage(232, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_3;
    }
    qword_1C00751E8 = GetBaseObject(v13);
    DereferenceObjectEx(v4);
    dword_1C00734C0 = 0;
  }
  else
  {
    if ( dword_1C00734C0 < 0 )
    {
      PrintDebugMessage(226, 0LL, 0LL, 0LL, 0LL);
      v2 = -4;
    }
    else
    {
      memset(&unk_1C0075238, 0, 0x28uLL);
      fRunningMethod = 1;
      v6 = AsyncEvalObject(
             qword_1C00751E8,
             (_SLIST_ENTRY *)&unk_1C0075238,
             dword_1C00734C0,
             (__int64)&unk_1C00750D0,
             (__int64)RunMethodCallBack,
             0LL,
             1);
      v7 = v6;
      if ( v6 == 32772 )
      {
        ObjectPath = GetObjectPath(qword_1C00751E8);
        v9 = qword_1C002C340;
        v10 = (void *)ObjectPath;
        if ( ObjectPath )
          v9 = (__int64 *)ObjectPath;
        ConPrintf("\n%s returned PENDING\n", v9);
        if ( v10 )
          ExFreePoolWithTag(v10, 0);
      }
      else
      {
        RunMethodCallBack(qword_1C00751E8 + 120, v6, &unk_1C0075238, 0LL);
        if ( v7 )
          v2 = -4;
      }
      DereferenceObjectEx((_QWORD *)qword_1C00751E8);
      qword_1C00751E8 = 0LL;
      dword_1C00734C0 = -1;
    }
    if ( v2 )
      goto LABEL_27;
  }
  return v2;
}
