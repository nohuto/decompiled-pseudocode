/*
 * XREFs of RIMGetDevicePreparsedDataLockfree @ 0x1C00C22C0
 * Callers:
 *     NtRIMGetDevicePreparsedDataLockfree @ 0x1C00C1900 (NtRIMGetDevicePreparsedDataLockfree.c)
 *     RIMGetDevicePreparsedData @ 0x1C00C21A0 (RIMGetDevicePreparsedData.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0010E70 (RawInputManagerDeviceObjectResolveHandle.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 */

__int64 __fastcall RIMGetDevicePreparsedDataLockfree(void *a1, void *a2, unsigned int *a3, char a4)
{
  int v7; // esi
  PVOID v8; // rdi
  char *v9; // rax
  __int64 v10; // rax
  unsigned int v11; // ecx
  const void *v12; // rdx
  unsigned int v13; // eax
  __int64 v14; // rax
  size_t v15; // r8
  unsigned __int64 v16; // rax
  PVOID Object; // [rsp+28h] [rbp-10h] BYREF

  v7 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v7 >= 0 )
  {
    v8 = Object;
    v9 = (char *)Object + 64;
    if ( !Object )
      v9 = 0LL;
    if ( v9[48] == 2 )
    {
      v10 = *((_QWORD *)v9 + 50);
      v11 = *(_DWORD *)(v10 + 104);
      v12 = *(const void **)(v10 + 16);
      if ( a2 )
      {
        if ( a4 )
        {
          if ( a3 + 1 < a3 || a3 + 1 > W32UserProbeAddress )
            *(_BYTE *)W32UserProbeAddress = 0;
          v14 = *a3;
          if ( v11 < (unsigned int)v14 )
            v14 = v11;
          v15 = (unsigned int)v14;
          v16 = (unsigned __int64)a2 + v14;
          if ( v16 > (unsigned __int64)W32UserProbeAddress || v16 <= (unsigned __int64)a2 )
            *(_BYTE *)W32UserProbeAddress = 0;
          memmove(a2, v12, v15);
        }
        else
        {
          v13 = *a3;
          if ( v11 < *a3 )
            v13 = v11;
          memmove(a2, v12, v13);
        }
      }
      else if ( a4 )
      {
        if ( a3 >= W32UserProbeAddress )
          a3 = (unsigned int *)W32UserProbeAddress;
        *a3 = v11;
      }
      else
      {
        *a3 = v11;
      }
    }
    else
    {
      v7 = -1073741811;
    }
    ObfDereferenceObject(v8);
  }
  return (unsigned int)v7;
}
