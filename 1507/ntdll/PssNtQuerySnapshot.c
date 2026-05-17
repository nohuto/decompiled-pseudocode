/*
 * XREFs of PssNtQuerySnapshot @ 0x1800822C0
 * Callers:
 *     <none>
 * Callees:
 *     PssNtValidateDescriptor @ 0x180059950 (PssNtValidateDescriptor.c)
 *     PsspQueryInfoClass_PSS_QUERY_PROCESS_INFORMATION @ 0x180082454 (PsspQueryInfoClass_PSS_QUERY_PROCESS_INFORMATION.c)
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
  int v17; // edi
  __int64 v18; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = PssNtValidateDescriptor((unsigned int *)a1, retaddr);
  v9 = 0;
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      if ( a4 == 224 )
        return PsspQueryInfoClass_PSS_QUERY_PROCESS_INFORMATION(a1, a3);
      return 3221225476LL;
    }
    v10 = a2 - 1;
    if ( !v10 )
    {
      if ( a4 == 8 )
      {
        v11 = *(_QWORD *)(a1 + 816);
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
    if ( v12 )
    {
      v14 = v12 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          v16 = v15 - 1;
          if ( v16 )
          {
            v17 = v16 - 1;
            if ( v17 )
            {
              if ( v17 != 1 )
                return 3221225475LL;
              if ( a4 == 96 )
              {
                result = 0LL;
                *(_OWORD *)a3 = *(_OWORD *)(a1 + 976);
                *(_OWORD *)(a3 + 16) = *(_OWORD *)(a1 + 992);
                *(_OWORD *)(a3 + 32) = *(_OWORD *)(a1 + 1008);
                *(_OWORD *)(a3 + 48) = *(_OWORD *)(a1 + 1024);
                *(_OWORD *)(a3 + 64) = *(_OWORD *)(a1 + 1040);
                *(_OWORD *)(a3 + 80) = *(_OWORD *)(a1 + 1056);
                return result;
              }
            }
            else if ( a4 == 16 )
            {
              v18 = *(_QWORD *)(a1 + 888);
              if ( v18 )
              {
                *(_QWORD *)a3 = v18;
                *(_DWORD *)(a3 + 8) = *(_DWORD *)(a1 + 880);
                return v9;
              }
              return (unsigned int)-1073741275;
            }
          }
          else if ( a4 == 8 )
          {
            if ( *(_QWORD *)(a1 + 952) )
            {
              *(_DWORD *)a3 = *(_DWORD *)(a1 + 936);
              *(_DWORD *)(a3 + 4) = *(_DWORD *)(a1 + 968);
              return v9;
            }
            return (unsigned int)-1073741275;
          }
          return 3221225476LL;
        }
        if ( a4 != 4 )
          return 3221225476LL;
        if ( !*(_QWORD *)(a1 + 920) )
          return (unsigned int)-1073741275;
        v13 = *(_DWORD *)(a1 + 904);
      }
      else
      {
        if ( a4 != 4 )
          return 3221225476LL;
        if ( !*(_QWORD *)(a1 + 864) )
          return (unsigned int)-1073741275;
        v13 = *(_DWORD *)(a1 + 856);
      }
    }
    else
    {
      if ( a4 != 4 )
        return 3221225476LL;
      if ( !*(_QWORD *)(a1 + 840) )
        return (unsigned int)-1073741275;
      v13 = *(_DWORD *)(a1 + 832);
    }
    *(_DWORD *)a3 = v13;
    return v9;
  }
  return result;
}
