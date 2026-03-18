/*
 * XREFs of ?xxxGetDummyText@@YAPEAXPEAUtagWINDOWSTATION@@IPEAUtagGETCLIPBDATA@@@Z @ 0x1C01E63B0
 * Callers:
 *     xxxGetClipboardData @ 0x1C0150964 (xxxGetClipboardData.c)
 * Callees:
 *     FindClipFormat @ 0x1C00F9130 (FindClipFormat.c)
 *     xxxGetClipboardData @ 0x1C0150964 (xxxGetClipboardData.c)
 */

__int64 __fastcall xxxGetDummyText(struct tagWINDOWSTATION *a1, int a2, struct tagGETCLIPBDATA *a3)
{
  int v5; // edx
  int v6; // edx
  unsigned int v7; // ebx
  unsigned int v8; // edi
  __int64 ClipFormat; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax

  v5 = a2 - 1;
  if ( v5 )
  {
    v6 = v5 - 6;
    if ( !v6 )
    {
      v7 = 13;
      v8 = 1;
      goto LABEL_8;
    }
    if ( v6 != 6 )
      return 0LL;
    v7 = 1;
  }
  else
  {
    v7 = 13;
  }
  v8 = 7;
LABEL_8:
  ClipFormat = FindClipFormat((__int64)a1, v7, 1);
  if ( !ClipFormat )
    return 0LL;
  if ( *(_QWORD *)(ClipFormat + 8) == 1LL )
  {
    v11 = FindClipFormat((__int64)a1, v8, 1);
    if ( !v11 || *(_QWORD *)(v11 + 8) == 1LL || !xxxGetClipboardData(a1, v8, (__int64)a3) )
      return 0LL;
    v7 = v8;
  }
  else if ( !xxxGetClipboardData(a1, v7, (__int64)a3) )
  {
    return 0LL;
  }
  v12 = FindClipFormat((__int64)a1, v7, 1);
  if ( !v12 )
    return 0LL;
  *(_DWORD *)a3 = *(_DWORD *)v12;
  v13 = *(_QWORD *)(v12 + 8);
  v14 = FindClipFormat((__int64)a1, 16LL, 1);
  if ( v14 )
    *((_QWORD *)a3 + 1) = *(_QWORD *)(v14 + 8);
  else
    *((_QWORD *)a3 + 1) = 0LL;
  return v13;
}
