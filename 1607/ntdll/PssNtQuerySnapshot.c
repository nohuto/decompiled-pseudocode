/*
 * XREFs of PssNtQuerySnapshot @ 0x180007DA0
 * Callers:
 *     <none>
 * Callees:
 *     PssNtValidateDescriptor @ 0x180008270 (PssNtValidateDescriptor.c)
 *     PsspQueryInfoClass_PSS_QUERY_PROCESS_INFORMATION @ 0x180008720 (PsspQueryInfoClass_PSS_QUERY_PROCESS_INFORMATION.c)
 */

__int64 __fastcall PssNtQuerySnapshot(__int64 a1, int a2, __int64 a3, int a4)
{
  __int64 result; // rax
  unsigned int v9; // r10d
  int v10; // edi
  __int64 v11; // rax
  int v12; // edi
  int v13; // eax
  int v14; // edi
  int v15; // edi
  int v16; // edi
  __int64 v17; // rax
  int v18; // edi
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = PssNtValidateDescriptor(a1, retaddr);
  v9 = 0;
  if ( (int)result >= 0 )
  {
    if ( a2 <= 5 )
    {
      if ( a2 == 5 )
      {
        if ( a4 == 8 )
        {
          if ( *(_QWORD *)(a1 + 1008) )
          {
            *(_DWORD *)a3 = *(_DWORD *)(a1 + 992);
            *(_DWORD *)(a3 + 4) = *(_DWORD *)(a1 + 1024);
            return v9;
          }
          return (unsigned int)-1073741275;
        }
        return 3221225476LL;
      }
      if ( !a2 )
      {
        if ( a4 == 240 )
          return PsspQueryInfoClass_PSS_QUERY_PROCESS_INFORMATION(a1, a3);
        return 3221225476LL;
      }
      v10 = a2 - 1;
      if ( !v10 )
      {
        if ( a4 == 8 )
        {
          v11 = *(_QWORD *)(a1 + 872);
          if ( v11 )
          {
            *(_QWORD *)a3 = v11;
            return v9;
          }
          return (unsigned int)-1073741275;
        }
        return 3221225476LL;
      }
      v12 = v10 - 1;
      if ( !v12 )
      {
        if ( a4 != 4 )
          return 3221225476LL;
        if ( !*(_QWORD *)(a1 + 896) )
          return (unsigned int)-1073741275;
        v13 = *(_DWORD *)(a1 + 888);
LABEL_15:
        *(_DWORD *)a3 = v13;
        return v9;
      }
      v18 = v12 - 1;
      if ( !v18 )
      {
        if ( a4 != 4 )
          return 3221225476LL;
        if ( !*(_QWORD *)(a1 + 920) )
          return (unsigned int)-1073741275;
        v13 = *(_DWORD *)(a1 + 912);
        goto LABEL_15;
      }
      if ( v18 == 1 )
      {
        if ( a4 == 4 )
        {
          if ( *(_QWORD *)(a1 + 976) )
          {
            *(_DWORD *)a3 = *(_DWORD *)(a1 + 960);
            return v9;
          }
          return (unsigned int)-1073741275;
        }
        return 3221225476LL;
      }
      return 3221225475LL;
    }
    v14 = a2 - 6;
    if ( !v14 )
    {
      if ( a4 == 16 )
      {
        v17 = *(_QWORD *)(a1 + 944);
        if ( v17 )
        {
          *(_QWORD *)a3 = v17;
          *(_DWORD *)(a3 + 8) = *(_DWORD *)(a1 + 936);
          return v9;
        }
        return (unsigned int)-1073741275;
      }
      return 3221225476LL;
    }
    v15 = v14 - 1;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( v16 )
      {
        if ( v16 == 1 )
        {
          if ( a4 == 40 )
          {
            if ( (*(_BYTE *)(a1 + 4) & 8) != 0 )
            {
              *(_OWORD *)a3 = *(_OWORD *)(a1 + 232);
              *(_OWORD *)(a3 + 16) = *(_OWORD *)(a1 + 248);
              *(_QWORD *)(a3 + 32) = *(_QWORD *)(a1 + 264);
              return v9;
            }
            return (unsigned int)-1073741275;
          }
          return 3221225476LL;
        }
        return 3221225475LL;
      }
      if ( a4 != 112 )
        return 3221225476LL;
      *(_OWORD *)a3 = *(_OWORD *)(a1 + 120);
      *(_OWORD *)(a3 + 16) = *(_OWORD *)(a1 + 136);
      *(_OWORD *)(a3 + 32) = *(_OWORD *)(a1 + 152);
      *(_OWORD *)(a3 + 48) = *(_OWORD *)(a1 + 168);
      *(_OWORD *)(a3 + 64) = *(_OWORD *)(a1 + 184);
      *(_OWORD *)(a3 + 80) = *(_OWORD *)(a1 + 200);
      *(_OWORD *)(a3 + 96) = *(_OWORD *)(a1 + 216);
    }
    else
    {
      if ( a4 != 96 )
        return 3221225476LL;
      *(_OWORD *)a3 = *(_OWORD *)(a1 + 1032);
      *(_OWORD *)(a3 + 16) = *(_OWORD *)(a1 + 1048);
      *(_OWORD *)(a3 + 32) = *(_OWORD *)(a1 + 1064);
      *(_OWORD *)(a3 + 48) = *(_OWORD *)(a1 + 1080);
      *(_OWORD *)(a3 + 64) = *(_OWORD *)(a1 + 1096);
      *(_OWORD *)(a3 + 80) = *(_OWORD *)(a1 + 1112);
    }
    return 0LL;
  }
  return result;
}
