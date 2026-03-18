/*
 * XREFs of ?DxgkEngAssertGdiOutput@@YAHQEBXPEBEIPEAE@Z @ 0x1C00830D0
 * Callers:
 *     <none>
 * Callees:
 *     hdevEnumerate @ 0x1C0034180 (hdevEnumerate.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

_BOOL8 __fastcall DxgkEngAssertGdiOutput(const void *a1, const unsigned __int8 *a2, __int64 a3, unsigned __int8 *a4)
{
  int v4; // ebp
  unsigned int v6; // r15d
  unsigned __int8 v9; // si
  struct PDEV *v10; // rcx
  BOOL v11; // edi
  struct PDEV *v12; // rax
  struct PDEV *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 (__fastcall *v16)(_QWORD, _QWORD); // rax
  int v17; // eax
  int v18; // edx
  struct PDEV *v19; // rbx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rcx
  _BOOL8 result; // rax
  __int64 v24; // rax
  __int64 (__fastcall *v25)(_QWORD, __int64); // rax

  v4 = 0;
  v6 = a3;
  if ( gOldModeChange )
  {
    v24 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v24);
  }
  v9 = 1;
  v10 = 0LL;
  v11 = 1;
  while ( 1 )
  {
    v12 = hdevEnumerate(v10, (int)a2, a3);
    v13 = v12;
    if ( !v12 )
      break;
    if ( (*((_DWORD *)v12 + 14) & 0x20400) == 0 )
    {
      v14 = *((_QWORD *)v12 + 325);
      if ( *(const void **)(v14 + 256) == a1 )
      {
        v15 = *(unsigned int *)(v14 + 272);
        if ( (unsigned int)v15 < v6 )
        {
          if ( a2[v15] )
            *((_DWORD *)v13 + 660) = -2147483646;
          else
            *((_DWORD *)v13 + 660) = -2147483645;
          v16 = (__int64 (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)v13 + 345);
          if ( v16 )
            v17 = v16(*((_QWORD *)v13 + 228), 0LL);
          else
            v17 = 0;
          *((_DWORD *)v13 + 660) = 0;
          if ( !v11 || (v11 = 1, !v17) )
            v11 = 0;
        }
      }
    }
    v10 = v13;
  }
  v19 = hdevEnumerate(0LL, (int)a2, a3);
  if ( !v19 )
    goto LABEL_22;
  do
  {
    if ( (*((_DWORD *)v19 + 14) & 0x20400) == 0 )
    {
      v21 = *((_QWORD *)v19 + 325);
      if ( *(const void **)(v21 + 256) == a1 )
      {
        v22 = *(unsigned int *)(v21 + 272);
        if ( (unsigned int)v22 < v6 )
        {
          if ( a2[v22] )
          {
            *((_DWORD *)v19 + 660) = 0x80000000;
            v25 = (__int64 (__fastcall *)(_QWORD, __int64))*((_QWORD *)v19 + 345);
            if ( v25 )
              LODWORD(v25) = v25(*((_QWORD *)v19 + 228), 1LL);
            *((_DWORD *)v19 + 660) = 0;
            v11 = v11 && (_DWORD)v25;
            v4 = 1;
          }
        }
      }
    }
    v19 = hdevEnumerate(v19, v18, v20);
  }
  while ( v19 );
  if ( !v4 )
LABEL_22:
    v9 = 0;
  result = v11;
  *a4 = v9;
  return result;
}
