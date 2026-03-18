/*
 * XREFs of xxxSetWindowLongPtr @ 0x1C00FBAB4
 * Callers:
 *     xxxCsDdeInitialize @ 0x1C00FB808 (xxxCsDdeInitialize.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     xxxSetWindowData @ 0x1C0067F10 (xxxSetWindowData.c)
 *     FCallerOk @ 0x1C0080DDC (FCallerOk.c)
 *     safe_cast_wf_to_PDIALOG @ 0x1C012466C (safe_cast_wf_to_PDIALOG.c)
 */

__int64 __fastcall xxxSetWindowLongPtr(struct tagWND *a1, int a2, __int64 a3, unsigned int a4, int a5)
{
  __int64 v6; // rbx
  int v9; // eax
  __int64 v10; // r10
  __int64 *v11; // r9
  __int64 result; // rax
  int v13; // ecx
  __int64 v14; // rax
  int v15; // edx
  int v16; // r8d
  __int64 v17; // rcx
  bool v18; // zf
  __int64 v19; // rcx
  __int64 v20; // r8
  __int16 v21; // r9
  _DWORD *v22; // rcx

  v6 = a2;
  v9 = FCallerOk((__int64)a1);
  LODWORD(v10) = 0;
  if ( !v9 )
  {
LABEL_7:
    v13 = 5;
LABEL_9:
    UserSetLastError(v13);
    return 0LL;
  }
  v11 = (__int64 *)gpsi;
  if ( (*((_WORD *)a1 + 33) & 0x3FFF) == 0 )
  {
LABEL_3:
    if ( (int)v6 >= 0 )
    {
LABEL_4:
      if ( (unsigned __int64)(unsigned int)v6 + 8 <= *((unsigned int *)a1 + 58) )
      {
        if ( a5 == (_DWORD)v10 )
          goto LABEL_6;
        v19 = *((_QWORD *)a1 + 19);
        if ( (*(_WORD *)(v19 + 34) & 0x100) == 0 )
          goto LABEL_6;
        v20 = *v11;
        v21 = *(_WORD *)(v19 + 8);
        v22 = &gDefaultServerClasses;
        while ( v21 != *(_WORD *)(v20 + 2LL * ((*v22 >> 3) & 0x1F) + 852) )
        {
          LODWORD(v10) = v10 + 1;
          v22 += 12;
          if ( (unsigned int)v10 >= 8 )
            goto LABEL_6;
        }
        if ( (int)v6 >= *((_DWORD *)&gDefaultServerClasses + 12 * (unsigned int)v10 + 6)
          || (*v22 & 0xF8) == 0xB0 && (unsigned __int64)(v6 + 8) <= 0x28 )
        {
LABEL_6:
          result = *(_QWORD *)((char *)a1 + v6 + 376);
          *(_QWORD *)((char *)a1 + v6 + 376) = a3;
          return result;
        }
        goto LABEL_7;
      }
LABEL_8:
      v13 = 1413;
      goto LABEL_9;
    }
    return xxxSetWindowData(a1, v6, a3, a4);
  }
  v14 = safe_cast_wf_to_PDIALOG(a1);
  v17 = v14;
  if ( !v14 )
  {
    if ( (int)v6 < 0 )
      return xxxSetWindowData(a1, v6, a3, a4);
    if ( (int)v6 >= *(unsigned __int16 *)(*v11 + 2LL * ((v15 & 0xFFFF3FFF) - 666) + 328) - 376 )
      goto LABEL_3;
    if ( v16 < 673 )
      goto LABEL_8;
    if ( v16 > 678 )
    {
      if ( v16 == 679 )
      {
        v18 = (_DWORD)v6 == 8;
        goto LABEL_25;
      }
      if ( v16 > 682 )
        goto LABEL_8;
    }
    v18 = (_DWORD)v6 == 0;
LABEL_25:
    if ( !v18 || *((_QWORD *)a1 + 47) != v10 && *((char *)a1 + 43) >= 0 )
      goto LABEL_8;
    goto LABEL_4;
  }
  if ( !(_DWORD)v6 )
  {
    result = *(_QWORD *)(v14 + 376);
    *(_QWORD *)(v17 + 376) = a3;
    return result;
  }
  if ( (_DWORD)v6 == 16 )
  {
    result = *(_QWORD *)(v14 + 392);
    *(_QWORD *)(v17 + 392) = a3;
    return result;
  }
  if ( (int)v6 >= 0 )
  {
    if ( (int)v6 < 30 )
    {
      v13 = 1415;
      goto LABEL_9;
    }
    goto LABEL_3;
  }
  return xxxSetWindowData(a1, v6, a3, a4);
}
