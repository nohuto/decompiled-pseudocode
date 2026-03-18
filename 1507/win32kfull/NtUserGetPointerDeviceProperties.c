/*
 * XREFs of NtUserGetPointerDeviceProperties @ 0x1C00EEDF0
 * Callers:
 *     <none>
 * Callees:
 *     IsPointerDeviceAccessible @ 0x1C000F3C0 (IsPointerDeviceAccessible.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _FindPointerDevice @ 0x1C00EF35C (_FindPointerDevice.c)
 *     _GetPointerDeviceProperties @ 0x1C00EF474 (_GetPointerDeviceProperties.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 */

__int64 __fastcall NtUserGetPointerDeviceProperties(__int64 a1, unsigned int *a2, volatile void *a3)
{
  unsigned int PointerDeviceProperties; // ebx
  __int64 v7; // rcx
  unsigned int v8; // r14d
  unsigned int *v9; // rax
  unsigned int v10; // r15d
  unsigned __int64 v11; // rcx
  unsigned int v12; // r12d
  const void *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct tagHID_POINTER_DEVICE_INFO *v17; // [rsp+28h] [rbp-80h] BYREF
  int v18; // [rsp+30h] [rbp-78h]
  const void *v19; // [rsp+48h] [rbp-60h]
  _BYTE v20[12]; // [rsp+58h] [rbp-50h] BYREF
  unsigned int v21; // [rsp+64h] [rbp-44h]
  unsigned __int64 v22; // [rsp+70h] [rbp-38h]
  unsigned int v23; // [rsp+B0h] [rbp+8h]

  v19 = 0LL;
  v18 = 0;
  v17 = 0LL;
  PointerDeviceProperties = 1;
  EnterCrit(1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v20);
  if ( !a1 || !a2 )
  {
    PointerDeviceProperties = 0;
    UserSetLastError(87);
    goto LABEL_28;
  }
  if ( (unsigned int)FindPointerDevice(a1, &v17, 0LL) )
  {
    if ( (unsigned int)IsPointerDeviceAccessible((__int64)v17) )
    {
      v8 = *(_DWORD *)(v7 + 300);
      if ( !a3 )
      {
        if ( (unsigned __int64)a2 >= W32UserProbeAddress )
          a2 = (unsigned int *)W32UserProbeAddress;
        *a2 = v8;
        goto LABEL_26;
      }
      v9 = a2;
      if ( (unsigned __int64)a2 >= W32UserProbeAddress )
        v9 = (unsigned int *)W32UserProbeAddress;
      v23 = *v9;
      if ( *v9 < v8 )
      {
        if ( (unsigned __int64)a2 >= W32UserProbeAddress )
          a2 = (unsigned int *)W32UserProbeAddress;
        *a2 = v8;
        PointerDeviceProperties = 0;
        UserSetLastError(122);
        goto LABEL_26;
      }
      v10 = v23 - *((_DWORD *)v17 + 74);
      v21 = v10;
      v11 = 28LL * v23;
      v22 = v11;
      if ( v11 <= 0xFFFFFFFF )
      {
        if ( v10 )
        {
          if ( (unsigned int)v11 >= 0x2710000 )
            goto LABEL_21;
          v18 = 28 * v8;
          v12 = 28 * v8;
          ProbeForWrite(a3, 28 * v8, 8u);
          if ( 28 * v8 - 1 > 0x270FFFF )
          {
            PointerDeviceProperties = 0;
            UserSetLastError(1359);
            goto LABEL_26;
          }
          v13 = (const void *)Win32AllocPoolZInit(v12, 1668313941LL);
          v19 = v13;
          if ( !v13 )
          {
LABEL_21:
            PointerDeviceProperties = 0;
            UserSetLastError(8);
            goto LABEL_26;
          }
          PointerDeviceProperties = GetPointerDeviceProperties(v17, v8);
          if ( PointerDeviceProperties )
          {
            memmove((void *)a3, v13, v12);
            if ( (unsigned __int64)a2 >= W32UserProbeAddress )
              a2 = (unsigned int *)W32UserProbeAddress;
            *a2 = v8;
            goto LABEL_26;
          }
        }
      }
    }
    PointerDeviceProperties = 0;
    UserSetLastError(87);
  }
  else
  {
    PointerDeviceProperties = 0;
  }
LABEL_26:
  if ( v19 )
    Win32FreePool(v19);
LABEL_28:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v20);
  UserSessionSwitchLeaveCrit(v15, v14);
  return PointerDeviceProperties;
}
