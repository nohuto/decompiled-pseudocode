/*
 * XREFs of NtUserGetPointerDeviceProperties @ 0x1C00E3D00
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     IsPointerDeviceAccessible @ 0x1C00E4484 (IsPointerDeviceAccessible.c)
 *     _FindPointerDevice @ 0x1C00E44A4 (_FindPointerDevice.c)
 *     _GetPointerDeviceProperties @ 0x1C00E4588 (_GetPointerDeviceProperties.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 */

__int64 __fastcall NtUserGetPointerDeviceProperties(__int64 a1, unsigned int *a2, volatile void *a3)
{
  int PointerDeviceProperties; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  unsigned int v10; // r14d
  unsigned int *v11; // rax
  unsigned int v12; // r15d
  unsigned __int64 v13; // rcx
  unsigned int v14; // r12d
  const void *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct tagHID_POINTER_DEVICE_INFO *v19; // [rsp+28h] [rbp-80h] BYREF
  int v20; // [rsp+38h] [rbp-70h]
  const void *v21; // [rsp+48h] [rbp-60h]
  unsigned int v22; // [rsp+54h] [rbp-54h]
  _BYTE v23[16]; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int64 v24; // [rsp+70h] [rbp-38h]
  unsigned int v25; // [rsp+B0h] [rbp+8h]

  v21 = 0LL;
  v20 = 0;
  v19 = 0LL;
  PointerDeviceProperties = 1;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v23);
  if ( !a1 || !a2 )
  {
    PointerDeviceProperties = 0;
    UserSetLastError(87LL);
    goto LABEL_28;
  }
  if ( (unsigned int)FindPointerDevice(a1, &v19, 0LL) )
  {
    if ( (unsigned int)IsPointerDeviceAccessible(v19) )
    {
      v10 = *(_DWORD *)(v9 + 304);
      if ( !a3 )
      {
        if ( (unsigned __int64)a2 >= W32UserProbeAddress )
          a2 = (unsigned int *)W32UserProbeAddress;
        *a2 = v10;
        goto LABEL_26;
      }
      v11 = a2;
      if ( (unsigned __int64)a2 >= W32UserProbeAddress )
        v11 = (unsigned int *)W32UserProbeAddress;
      v25 = *v11;
      if ( *v11 < v10 )
      {
        if ( (unsigned __int64)a2 >= W32UserProbeAddress )
          a2 = (unsigned int *)W32UserProbeAddress;
        *a2 = v10;
        PointerDeviceProperties = 0;
        UserSetLastError(122LL);
        goto LABEL_26;
      }
      v12 = v25 - *((_DWORD *)v19 + 400);
      v22 = v12;
      v13 = 28LL * v25;
      v24 = v13;
      if ( v13 <= 0xFFFFFFFF )
      {
        if ( v12 )
        {
          if ( (unsigned int)v13 >= 0x2710000 )
            goto LABEL_21;
          v20 = 28 * v10;
          v14 = 28 * v10;
          ProbeForWrite(a3, 28 * v10, 8u);
          if ( 28 * v10 - 1 > 0x270FFFF )
          {
            PointerDeviceProperties = 0;
            UserSetLastError(1359LL);
            goto LABEL_26;
          }
          v15 = (const void *)Win32AllocPoolZInit(v14, 1668313941LL);
          v21 = v15;
          if ( !v15 )
          {
LABEL_21:
            PointerDeviceProperties = 0;
            UserSetLastError(8LL);
            goto LABEL_26;
          }
          PointerDeviceProperties = GetPointerDeviceProperties(v19, v10);
          if ( PointerDeviceProperties )
          {
            memmove((void *)a3, v15, v14);
            if ( (unsigned __int64)a2 >= W32UserProbeAddress )
              a2 = (unsigned int *)W32UserProbeAddress;
            *a2 = v10;
            goto LABEL_26;
          }
        }
      }
    }
    PointerDeviceProperties = 0;
    UserSetLastError(87LL);
  }
  else
  {
    PointerDeviceProperties = 0;
  }
LABEL_26:
  if ( v21 )
    Win32FreePool(v21, v7, v8);
LABEL_28:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v23);
  UserSessionSwitchLeaveCrit(v17, v16);
  return PointerDeviceProperties;
}
