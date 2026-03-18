/*
 * XREFs of xxxMNButtonUp @ 0x1C013ECEC
 * Callers:
 *     xxxMenuWindowProc @ 0x1C013CEA0 (xxxMenuWindowProc.c)
 *     xxxHandleMenuMessages @ 0x1C0141790 (xxxHandleMenuMessages.c)
 * Callees:
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@PEAUtagPOPUPMENU@@PEAUtagITEM@@I_J@Z @ 0x1C013C724 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@PEAUtagPOPUPMENU@@PEAUtagITEM@@I_J@Z.c)
 *     xxxMNCancel @ 0x1C013C7D8 (xxxMNCancel.c)
 *     xxxMNOpenHierarchy @ 0x1C0140574 (xxxMNOpenHierarchy.c)
 */

void __fastcall xxxMNButtonUp(struct tagPOPUPMENU *a1, struct tagMENUSTATE *a2, int a3, __int64 a4)
{
  __int64 v6; // r9
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8

  if ( (*((_DWORD *)a2 + 2) & 8) != 0 )
  {
    if ( a3 == -1 )
      goto LABEL_13;
    v6 = *((unsigned int *)a1 + 20);
    if ( (_DWORD)v6 != a3 )
      goto LABEL_13;
    v7 = *(_DWORD *)a1;
    if ( (*(_DWORD *)a1 & 1) != 0 )
    {
      if ( (v7 & 0x20) != 0 )
      {
        if ( (v7 & 0x80u) != 0 )
        {
          *(_DWORD *)a1 = v7 & 0xFFFFFF7F;
          xxxMNCancel((__int64)a2, 0, 0, 0LL);
          return;
        }
        goto LABEL_13;
      }
    }
    else if ( (v7 & 0x2000) != 0 )
    {
      *(_DWORD *)a1 = v7 & 0xFFFFFF7F;
      xxxMNOpenHierarchy(a1);
      goto LABEL_13;
    }
    if ( (_DWORD)v6 != -1 )
    {
      v8 = *((_QWORD *)a1 + 5);
      if ( (unsigned int)v6 < *(_DWORD *)(v8 + 52) )
      {
        v9 = *(_QWORD *)(v8 + 80) + 152 * v6;
        if ( (*(_DWORD *)v9 & 0x800) == 0 && (*(_DWORD *)(v9 + 4) & 3) == 0 && !*(_QWORD *)(v9 + 16) )
        {
          xxxMNDismissWithNotify(a2, a1, (struct tagITEM *)v9, v6, a4);
          return;
        }
      }
    }
LABEL_13:
    *((_DWORD *)a2 + 2) &= 0xFFFFFFB7;
  }
}
