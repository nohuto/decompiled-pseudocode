/*
 * XREFs of ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C0122E0C
 * Callers:
 *     xxxClientExpandStringW @ 0x1C00FEC40 (xxxClientExpandStringW.c)
 *     SfnINCNTOUTSTRING @ 0x1C0122410 (SfnINCNTOUTSTRING.c)
 *     SfnOUTSTRING @ 0x1C0122820 (SfnOUTSTRING.c)
 *     xxxClientLoadStringW @ 0x1C0122FD8 (xxxClientLoadStringW.c)
 *     ClientGetListboxString @ 0x1C0143E80 (ClientGetListboxString.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1C020F330 (SfnINCNTOUTSTRINGNULL.c)
 * Callees:
 *     MBToWCSEx @ 0x1C0143908 (MBToWCSEx.c)
 *     strncpycch @ 0x1C0249D38 (strncpycch.c)
 *     WCSToMBEx @ 0x1C0249EC4 (WCSToMBEx.c)
 */

void __fastcall CopyOutputString(struct _CALLBACKSTATUS *a1, struct _LARGE_STRING *a2, int a3, int a4)
{
  __int64 v4; // rbx
  __int64 v5; // r8
  struct _CALLBACKSTATUS *v7; // rdx
  char *v8; // r10
  _BYTE *v9; // r8
  __int16 *v10; // r8
  unsigned int v11; // ecx
  _WORD *v12; // rbx
  _WORD *i; // rdx
  __int16 v14; // ax
  __int64 v15; // r8
  unsigned int v16; // eax
  __int64 v17; // r8
  __int64 v18; // rdx
  unsigned int v19; // eax
  unsigned __int64 v20; // rax

  LODWORD(v4) = a3;
  v5 = *((unsigned int *)a1 + 2);
  v7 = a1;
  if ( !(_DWORD)v5 )
  {
    v9 = (_BYTE *)W32UserProbeAddress;
LABEL_19:
    *v9 = 0;
    goto LABEL_5;
  }
  a1 = (struct _CALLBACKSTATUS *)*((_QWORD *)a1 + 2);
  if ( ((a4 == 0) & (unsigned __int8)a1) != 0 )
    ExRaiseDatatypeMisalignment();
  v8 = (char *)a1 + v5;
  v9 = (_BYTE *)W32UserProbeAddress;
  if ( (unsigned __int64)v8 > W32UserProbeAddress || v8 < (char *)a1 )
    goto LABEL_19;
LABEL_5:
  if ( *((int *)a2 + 1) < 0 )
  {
    if ( a4 )
    {
      v17 = *((unsigned int *)v7 + 2);
      v18 = *((_QWORD *)v7 + 2);
      if ( (unsigned int)v4 < (unsigned int)v17 )
        v17 = (unsigned int)v4;
      v19 = strncpycch(*((_QWORD *)a2 + 1), v18, v17);
    }
    else
    {
      if ( *(_DWORD *)v7 >= *((_DWORD *)v7 + 2) >> 1 )
        v20 = (unsigned __int64)*((unsigned int *)v7 + 2) >> 1;
      else
        LODWORD(v20) = *(_DWORD *)v7;
      v19 = WCSToMBEx(0LL, *((_QWORD *)v7 + 2), (unsigned int)v20, (char *)a2 + 8, v4);
      if ( v19 >= (unsigned int)v4 )
        goto LABEL_31;
      *(_BYTE *)(v19 + *((_QWORD *)a2 + 1)) = 0;
    }
    LODWORD(v4) = v19;
LABEL_31:
    *(_DWORD *)a2 = v4;
    return;
  }
  if ( a4 )
  {
    v15 = *((unsigned int *)v7 + 2);
    if ( *(_DWORD *)v7 < (unsigned int)v15 )
      v15 = *(unsigned int *)v7;
    v16 = MBToWCSEx(a1, *((_QWORD *)v7 + 2), v15, (char *)a2 + 8, v4);
    if ( v16 < (unsigned int)v4 )
    {
      LODWORD(v4) = v16;
      *(_WORD *)(*((_QWORD *)a2 + 1) + 2LL * v16) = 0;
    }
  }
  else
  {
    v10 = (__int16 *)*((_QWORD *)v7 + 2);
    v11 = *((_DWORD *)v7 + 2) >> 1;
    if ( (unsigned int)v4 < v11 )
      v11 = v4;
    v12 = (_WORD *)*((_QWORD *)a2 + 1);
    for ( i = v12; v11; --v11 )
    {
      v14 = *v10++;
      *v12++ = v14;
      if ( !v14 )
        break;
    }
    v4 = v12 - i;
  }
  *(_DWORD *)a2 = 2 * v4;
}
