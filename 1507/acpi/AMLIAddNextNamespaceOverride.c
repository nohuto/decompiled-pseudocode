/*
 * XREFs of AMLIAddNextNamespaceOverride @ 0x1C0044598
 * Callers:
 *     AMLIAddNextNamespaceOverride @ 0x1C0044598 (AMLIAddNextNamespaceOverride.c)
 *     AMLIInitialize @ 0x1C0084CC0 (AMLIInitialize.c)
 * Callees:
 *     CreateNameSpaceObject @ 0x1C000F9D0 (CreateNameSpaceObject.c)
 *     DereferenceObjectEx @ 0x1C0013800 (DereferenceObjectEx.c)
 *     __security_check_cookie @ 0x1C00235E0 (__security_check_cookie.c)
 *     AMLIAddNextNamespaceOverride @ 0x1C0044598 (AMLIAddNextNamespaceOverride.c)
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C00446F4 (AMLIAddNextNamespaceOverrideObject.c)
 *     AMLIGetValidNamespaceName @ 0x1C0044CA4 (AMLIGetValidNamespaceName.c)
 *     OSCloseHandle @ 0x1C00669C0 (OSCloseHandle.c)
 *     OSOpenNextSubkey @ 0x1C007D09C (OSOpenNextSubkey.c)
 *     OSReadNextRegValue @ 0x1C007D220 (OSReadNextRegValue.c)
 */

__int64 __fastcall AMLIAddNextNamespaceOverride(void *a1, __int64 a2)
{
  ULONG v3; // edi
  int RegValue; // ebx
  ULONG v5; // esi
  int Subkey; // edi
  int v7; // edx
  unsigned int v9; // [rsp+28h] [rbp-48h]
  HANDLE Handle; // [rsp+38h] [rbp-38h] BYREF
  __int64 v11; // [rsp+40h] [rbp-30h]
  struct _EX_RUNDOWN_REF *v12; // [rsp+48h] [rbp-28h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-20h]
  unsigned __int8 v14[8]; // [rsp+58h] [rbp-18h] BYREF

  Handle = 0LL;
  v3 = 0;
  v11 = a2;
  KeyHandle = a1;
  do
  {
    RegValue = OSReadNextRegValue(a1, v3, v14);
    if ( RegValue >= 0 )
      RegValue = AMLIAddNextNamespaceOverrideObject(a1, v11, v14);
    ++v3;
  }
  while ( !RegValue );
  if ( RegValue < 0 )
  {
    if ( RegValue == -2147483622 )
    {
      v5 = 0;
      do
      {
        Subkey = OSOpenNextSubkey(KeyHandle, v5, v14, (__int64)&Handle);
        if ( Subkey >= 0 )
        {
          RegValue = AMLIGetValidNamespaceName(v14, 0LL);
          if ( RegValue < 0 )
            goto LABEL_20;
          Subkey = CreateNameSpaceObject(gpheapGlobal, v14, v11, *(struct _EX_RUNDOWN_REF **)(v11 + 40), &v12, v7 & v9);
          if ( Subkey >= 0 )
          {
            Subkey = AMLIAddNextNamespaceOverride(Handle, v12);
            DereferenceObjectEx((__int64)v12);
          }
          OSCloseHandle(Handle);
          Handle = 0LL;
        }
        ++v5;
      }
      while ( !Subkey );
      if ( Subkey == -2147483622 )
      {
        RegValue = 0;
      }
      else
      {
        if ( Subkey >= 0 )
          Subkey = -1073741823;
        RegValue = Subkey;
      }
    }
  }
  else
  {
    RegValue = -1073741823;
  }
LABEL_20:
  if ( Handle )
    OSCloseHandle(Handle);
  return (unsigned int)RegValue;
}
