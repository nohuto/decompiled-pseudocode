/*
 * XREFs of CreateSetupNameArray @ 0x1C0113BA0
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
  unsigned __int16 *v3; // rdi
  int v4; // ebx
  int v5; // edx
  int v6; // ecx
  unsigned __int16 *v7; // r8
  __int64 v8; // rax
  struct _UNICODE_STRING *v9; // rcx
  int v10; // edx
  __int64 v11; // r9
  WCHAR *v12; // r8
  __int64 v13; // rcx

  result = FastGetProfileValue(0LL, 34LL, L"SetupProgramNames", 0LL, 0LL, 0, 0);
  v1 = result;
  if ( (_DWORD)result )
  {
    result = Win32AllocPool((unsigned int)result);
    glpSetupPrograms = (unsigned __int16 *)result;
    if ( result )
    {
      ProfileValue = FastGetProfileValue(0LL, 34LL, L"SetupProgramNames", 0LL, result, v1, 0);
      if ( !ProfileValue || ProfileValue != v1 )
      {
        result = Win32FreePool(glpSetupPrograms);
        goto LABEL_27;
      }
      v3 = glpSetupPrograms;
      v4 = v1 >> 1;
      v5 = 0;
      v6 = 0;
      while ( v6 < v4 )
      {
        v7 = &glpSetupPrograms[v6];
        if ( *v7 )
        {
          v8 = -1LL;
          do
            ++v8;
          while ( v7[v8] );
          v6 += v8 + 1;
          ++v5;
        }
        else
        {
          ++v6;
        }
      }
      giSetupExe = v5;
      result = Win32AllocPool(16LL * v5);
      gpastrSetupExe = (struct _UNICODE_STRING *)result;
      v9 = (struct _UNICODE_STRING *)result;
      if ( !result )
      {
        result = Win32FreePool(glpSetupPrograms);
        giSetupExe = 0;
LABEL_27:
        glpSetupPrograms = 0LL;
        return result;
      }
      v10 = 0;
      if ( v4 > 0 )
      {
        v11 = 0LL;
        do
        {
          result = v10;
          v12 = &v3[v10];
          if ( *v12 )
          {
            v9[v11].Buffer = v12;
            v13 = -1LL;
            do
              ++v13;
            while ( v12[v13] );
            gpastrSetupExe[v11].Length = 2 * v13;
            gpastrSetupExe[v11].MaximumLength = gpastrSetupExe[v11].Length + 2;
            result = -1LL;
            do
              ++result;
            while ( v12[result] );
            v9 = gpastrSetupExe;
            v10 += result + 1;
            ++v11;
          }
          else
          {
            ++v10;
          }
        }
        while ( v10 < v4 );
      }
    }
  }
  return result;
}
