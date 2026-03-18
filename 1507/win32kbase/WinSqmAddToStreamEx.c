/*
 * XREFs of WinSqmAddToStreamEx @ 0x1C007E7E0
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C000F670 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C004C2C0 (Win32AllocPool.c)
 *     WinSqmEventEnabled @ 0x1C0066FA4 (WinSqmEventEnabled.c)
 *     ?IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z @ 0x1C0066FF0 (-IsExtendedWinSqmHandle@@YAHPEAU_GUID@@@Z.c)
 *     WinSqmEventWrite @ 0x1C007B6C4 (WinSqmEventWrite.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

__int64 __fastcall WinSqmAddToStreamEx(struct _GUID *a1, int a2, unsigned int a3, __int64 a4, char a5)
{
  __int64 result; // rax
  struct _GUID *v8; // rdi
  unsigned int v9; // r9d
  unsigned int v10; // edx
  unsigned int v11; // r10d
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rbx
  unsigned int v16; // r15d
  unsigned int v17; // edi
  char *v18; // r8
  __int64 v19; // rdx
  int v20; // eax
  unsigned int v21; // [rsp+20h] [rbp-81h] BYREF
  _QWORD UserData[14]; // [rsp+30h] [rbp-71h] BYREF
  int v23; // [rsp+108h] [rbp+67h] BYREF
  unsigned int v24; // [rsp+110h] [rbp+6Fh] BYREF

  v24 = a3;
  v23 = a2;
  UserData[0] = 0LL;
  result = (__int64)memset(&UserData[1], 0, 0x68uLL);
  v21 = 0;
  if ( a1 != (struct _GUID *)-1LL )
  {
    if ( (unsigned int)IsExtendedWinSqmHandle(a1) )
    {
      v8 = (struct _GUID *)((char *)a1 + 24);
    }
    else
    {
      v8 = (struct _GUID *)&unk_1C00E6FD8;
      if ( a1 )
        v8 = a1;
    }
    result = WinSqmEventEnabled(&SQM_ADD_STREAMROW, v8);
    if ( (_DWORD)result )
    {
      v9 = v24;
      result = 64LL;
      v10 = v21;
      v11 = 0;
      if ( v24 > 0x40 )
        v9 = 64;
      v24 = v9;
      if ( v9 )
      {
        do
        {
          switch ( *(_DWORD *)(a4 + 16LL * v11 + 4) )
          {
            case 1:
              v12 = 12;
              break;
            case 2:
              v13 = -1LL;
              do
                ++v13;
              while ( *(_WORD *)(*(_QWORD *)(a4 + 16LL * v11 + 8) + 2 * v13) );
              if ( (unsigned int)v13 > 0x80 )
                LODWORD(v13) = 128;
              v12 = 2 * v13 + 10;
              break;
            case 3:
              v12 = 16;
              break;
            default:
              return result;
          }
          ++v11;
          result = (v12 + 7) & 0xFFFFFFF8;
          v10 += result;
          v21 = v10;
        }
        while ( v11 < v9 );
      }
      if ( v10 <= 0x4400 )
      {
        result = Win32AllocPool();
        v14 = result;
        if ( result )
        {
          UserData[1] = 16LL;
          v15 = result;
          UserData[2] = &v23;
          UserData[0] = v8;
          v16 = 0;
          UserData[4] = &unk_1C0106558;
          UserData[3] = 4LL;
          UserData[6] = &v24;
          UserData[8] = &v21;
          UserData[5] = 4LL;
          UserData[7] = 4LL;
          for ( UserData[9] = 4LL; v16 < v24; v15 += v17 )
          {
            *(_DWORD *)v15 = *(_DWORD *)(a4 + 16LL * v16 + 4);
            switch ( *(_DWORD *)(a4 + 16LL * v16 + 4) )
            {
              case 1:
                v17 = 16;
                if ( v15 + 16 > v14 + (unsigned __int64)v21 )
                  return Win32FreePool();
                *(_DWORD *)(v15 + 8) = *(_DWORD *)(a4 + 16LL * v16 + 8);
                break;
              case 2:
                v18 = *(char **)(a4 + 16LL * v16 + 8);
                v19 = -1LL;
                do
                  ++v19;
                while ( *(_WORD *)&v18[2 * v19] );
                if ( (unsigned int)v19 > 0x80 )
                  LODWORD(v19) = 128;
                v17 = (2 * v19 + 17) & 0xFFFFFFF8;
                if ( v15 + (unsigned __int64)v17 > v14 + (unsigned __int64)v21 )
                  return Win32FreePool();
                v20 = RtlStringCchCopyW((char *)(v15 + 8), (unsigned int)(v19 + 1), v18);
                if ( (int)(v20 + 0x80000000) >= 0 && v20 != -2147483643 )
                  return Win32FreePool();
                break;
              case 3:
                v17 = 16;
                if ( v15 + 16 > v14 + (unsigned __int64)v21 )
                  return Win32FreePool();
                *(_QWORD *)(v15 + 8) = *(_QWORD *)(a4 + 16LL * v16 + 8);
                break;
              default:
                return Win32FreePool();
            }
            *(_DWORD *)(v15 + 4) = v17;
            ++v16;
          }
          UserData[11] = v21;
          UserData[10] = v14;
          UserData[12] = &a5;
          UserData[13] = 4LL;
          WinSqmEventWrite(&SQM_ADD_STREAMROW, 7u, (PEVENT_DATA_DESCRIPTOR)UserData);
          return Win32FreePool();
        }
      }
    }
  }
  return result;
}
