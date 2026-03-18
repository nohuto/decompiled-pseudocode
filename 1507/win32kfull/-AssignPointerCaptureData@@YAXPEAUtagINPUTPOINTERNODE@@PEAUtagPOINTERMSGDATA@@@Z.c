/*
 * XREFs of ?AssignPointerCaptureData@@YAXPEAUtagINPUTPOINTERNODE@@PEAUtagPOINTERMSGDATA@@@Z @ 0x1C01FBE08
 * Callers:
 *     ?CreateAndReferenceMsgData@PointerList@@YA_KGKKIH@Z @ 0x1C01FBF3C (-CreateAndReferenceMsgData@PointerList@@YA_KGKKIH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall AssignPointerCaptureData(struct tagINPUTPOINTERNODE *a1, struct tagPOINTERMSGDATA *a2)
{
  int v2; // r9d
  _QWORD *v3; // r8
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx

  v2 = *((_DWORD *)a2 + 9);
  v3 = 0LL;
  if ( (v2 & 1) == 0 )
  {
    if ( (v2 & 4) != 0 )
      goto LABEL_9;
    v6 = (_QWORD *)((char *)a1 + 112);
    if ( (_QWORD *)*v6 != v6 )
      v3 = (_QWORD *)*v6;
    if ( (v2 & 2) != 0 || !v3 || (*((_DWORD *)v3 + 9) & 1) != 0 || (v7 = v3[5]) == 0 )
    {
LABEL_9:
      v7 = Win32AllocPoolZInit(88LL, 1131443029LL);
      if ( !v7 )
        return;
      *(_WORD *)(v7 + 20) = *((_WORD *)a2 + 8);
      *(_DWORD *)(v7 + 24) = *((_DWORD *)a2 + 7);
      v8 = *((_QWORD *)a1 + 12);
      *(_QWORD *)v7 = v8;
      *(_QWORD *)(v7 + 8) = (char *)a1 + 96;
      if ( *(struct tagINPUTPOINTERNODE **)(v8 + 8) != (struct tagINPUTPOINTERNODE *)((char *)a1 + 96) )
        __fastfail(3u);
      *(_QWORD *)(v8 + 8) = v7;
      *((_QWORD *)a1 + 12) = v7;
    }
    *((_QWORD *)a2 + 5) = v7;
    ++*(_DWORD *)(v7 + 16);
  }
}
