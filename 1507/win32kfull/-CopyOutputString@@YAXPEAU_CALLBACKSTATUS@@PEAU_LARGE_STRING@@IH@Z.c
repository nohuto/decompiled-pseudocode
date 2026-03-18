/*
 * XREFs of ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C0059AA8
 * Callers:
 *     SfnOUTSTRING @ 0x1C005A340 (SfnOUTSTRING.c)
 *     SfnINCNTOUTSTRING @ 0x1C00F0960 (SfnINCNTOUTSTRING.c)
 *     ClientGetListboxString @ 0x1C0118DA0 (ClientGetListboxString.c)
 *     xxxClientExpandStringW @ 0x1C0136CC0 (xxxClientExpandStringW.c)
 *     xxxClientLoadStringW @ 0x1C0137008 (xxxClientLoadStringW.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1C020EF40 (SfnINCNTOUTSTRINGNULL.c)
 * Callees:
 *     wcsncpycch @ 0x1C0059B8C (wcsncpycch.c)
 *     MBToWCSEx @ 0x1C01188A8 (MBToWCSEx.c)
 *     strncpycch @ 0x1C0249D78 (strncpycch.c)
 *     WCSToMBEx @ 0x1C0249F04 (WCSToMBEx.c)
 */

void __fastcall CopyOutputString(struct _CALLBACKSTATUS *a1, struct _LARGE_STRING *a2, unsigned int a3, int a4)
{
  __int64 v5; // r8
  struct _CALLBACKSTATUS *v7; // rdx
  unsigned __int64 v8; // rax
  unsigned int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // rdx
  unsigned int v13; // eax
  unsigned __int64 v14; // rax

  v5 = *((unsigned int *)a1 + 2);
  v7 = a1;
  if ( (_DWORD)v5 )
  {
    a1 = (struct _CALLBACKSTATUS *)*((_QWORD *)a1 + 2);
    if ( ((a4 == 0) & (unsigned __int8)a1) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)a1 + v5 > W32UserProbeAddress || (struct _CALLBACKSTATUS *)((char *)a1 + v5) < a1 )
      *W32UserProbeAddress = 0;
  }
  else
  {
    *W32UserProbeAddress = 0;
  }
  if ( *((int *)a2 + 1) >= 0 )
  {
    if ( a4 )
    {
      v10 = *((unsigned int *)v7 + 2);
      if ( *(_DWORD *)v7 < (unsigned int)v10 )
        v10 = *(unsigned int *)v7;
      v9 = MBToWCSEx(a1, *((_QWORD *)v7 + 2), v10, (char *)a2 + 8, a3);
      if ( v9 >= a3 )
        goto LABEL_11;
      *(_WORD *)(*((_QWORD *)a2 + 1) + 2LL * v9) = 0;
    }
    else
    {
      if ( a3 >= *((_DWORD *)v7 + 2) >> 1 )
        v8 = (unsigned __int64)*((unsigned int *)v7 + 2) >> 1;
      else
        LODWORD(v8) = a3;
      v9 = wcsncpycch(*((_QWORD *)a2 + 1), *((_QWORD *)v7 + 2), (unsigned int)v8);
    }
    a3 = v9;
LABEL_11:
    *(_DWORD *)a2 = 2 * a3;
    return;
  }
  if ( a4 )
  {
    v11 = *((unsigned int *)v7 + 2);
    v12 = *((_QWORD *)v7 + 2);
    if ( a3 < (unsigned int)v11 )
      v11 = a3;
    v13 = strncpycch(*((_QWORD *)a2 + 1), v12, v11);
  }
  else
  {
    if ( *(_DWORD *)v7 >= *((_DWORD *)v7 + 2) >> 1 )
      v14 = (unsigned __int64)*((unsigned int *)v7 + 2) >> 1;
    else
      LODWORD(v14) = *(_DWORD *)v7;
    v13 = WCSToMBEx(0LL, *((_QWORD *)v7 + 2), (unsigned int)v14, (char *)a2 + 8, a3);
    if ( v13 >= a3 )
      goto LABEL_30;
    *(_BYTE *)(v13 + *((_QWORD *)a2 + 1)) = 0;
  }
  a3 = v13;
LABEL_30:
  *(_DWORD *)a2 = a3;
}
