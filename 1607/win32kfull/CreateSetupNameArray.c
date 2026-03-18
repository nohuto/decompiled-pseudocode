/*
 * XREFs of CreateSetupNameArray @ 0x1C01350A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 CreateSetupNameArray()
{
  __int64 result; // rax
  unsigned int v1; // ebx
  int ProfileValue; // eax
  __int64 v3; // rdx
  __int64 v4; // r8
  unsigned __int16 *v5; // rdi
  int v6; // ebx
  int v7; // edx
  int v8; // ecx
  unsigned __int16 *v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  struct _UNICODE_STRING *v13; // rcx
  int v14; // edx
  __int64 v15; // r9
  WCHAR *v16; // r8
  __int64 v17; // rcx

  result = FastGetProfileValue(0LL, 34LL, L"SetupProgramNames", 0LL, 0LL, 0, 0);
  v1 = result;
  if ( (_DWORD)result )
  {
    result = Win32AllocPool((unsigned int)result, 2020897621LL);
    glpSetupPrograms = (unsigned __int16 *)result;
    if ( result )
    {
      ProfileValue = FastGetProfileValue(0LL, 34LL, L"SetupProgramNames", 0LL, result, v1, 0);
      if ( !ProfileValue || ProfileValue != v1 )
      {
        result = Win32FreePool(glpSetupPrograms, v3, v4);
        goto LABEL_27;
      }
      v5 = glpSetupPrograms;
      v6 = v1 >> 1;
      v7 = 0;
      v8 = 0;
      while ( v8 < v6 )
      {
        v9 = &glpSetupPrograms[v8];
        if ( *v9 )
        {
          v10 = -1LL;
          do
            ++v10;
          while ( v9[v10] );
          v8 += v10 + 1;
          ++v7;
        }
        else
        {
          ++v8;
        }
      }
      giSetupExe = v7;
      result = Win32AllocPool(16LL * v7, 2020897621LL);
      gpastrSetupExe = (struct _UNICODE_STRING *)result;
      v13 = (struct _UNICODE_STRING *)result;
      if ( !result )
      {
        result = Win32FreePool(glpSetupPrograms, v11, v12);
        giSetupExe = 0;
LABEL_27:
        glpSetupPrograms = 0LL;
        return result;
      }
      v14 = 0;
      if ( v6 > 0 )
      {
        v15 = 0LL;
        do
        {
          result = v14;
          v16 = &v5[v14];
          if ( *v16 )
          {
            v13[v15].Buffer = v16;
            v17 = -1LL;
            do
              ++v17;
            while ( v16[v17] );
            gpastrSetupExe[v15].Length = 2 * v17;
            gpastrSetupExe[v15].MaximumLength = gpastrSetupExe[v15].Length + 2;
            result = -1LL;
            do
              ++result;
            while ( v16[result] );
            v13 = gpastrSetupExe;
            v14 += result + 1;
            ++v15;
          }
          else
          {
            ++v14;
          }
        }
        while ( v14 < v6 );
      }
    }
  }
  return result;
}
