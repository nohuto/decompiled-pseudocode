/*
 * XREFs of NtUserGetPointerDeviceProperties @ 0x1C011A8E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     _GetPointerDeviceProperties @ 0x1C0118528 (_GetPointerDeviceProperties.c)
 *     _FindPointerDevice @ 0x1C011A7F8 (_FindPointerDevice.c)
 *     IsPointerDeviceAccessible @ 0x1C011D980 (IsPointerDeviceAccessible.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 */

__int64 __fastcall NtUserGetPointerDeviceProperties(unsigned __int64 a1, unsigned int *a2, volatile void *a3)
{
  unsigned int PointerDeviceProperties; // ebx
  __int64 v7; // rcx
  unsigned int v8; // r14d
  unsigned int *v9; // rax
  unsigned int v10; // r15d
  unsigned __int64 v11; // rcx
  unsigned int v12; // r12d
  struct tagPOINTER_DEVICE_PROPERTY *v13; // rax
  struct tagPOINTER_DEVICE_PROPERTY *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct tagHID_POINTER_DEVICE_INFO *v18; // [rsp+28h] [rbp-80h] BYREF
  int v19; // [rsp+30h] [rbp-78h]
  struct tagPOINTER_DEVICE_PROPERTY *v20; // [rsp+48h] [rbp-60h]
  _BYTE v21[12]; // [rsp+58h] [rbp-50h] BYREF
  unsigned int v22; // [rsp+64h] [rbp-44h]
  unsigned __int64 v23; // [rsp+70h] [rbp-38h]
  unsigned int v24; // [rsp+B0h] [rbp+8h]

  v20 = 0LL;
  v19 = 0;
  v18 = 0LL;
  PointerDeviceProperties = 1;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v21);
  if ( !a1 || !a2 )
  {
    PointerDeviceProperties = 0;
    UserSetLastError(87);
    goto LABEL_28;
  }
  if ( (unsigned int)FindPointerDevice(a1, (struct _LIST_ENTRY **)&v18, 0LL) )
  {
    if ( (unsigned int)IsPointerDeviceAccessible(v18) )
    {
      v8 = *(_DWORD *)(v7 + 316);
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
      v24 = *v9;
      if ( *v9 < v8 )
      {
        if ( (unsigned __int64)a2 >= W32UserProbeAddress )
          a2 = (unsigned int *)W32UserProbeAddress;
        *a2 = v8;
        PointerDeviceProperties = 0;
        UserSetLastError(122);
        goto LABEL_26;
      }
      v10 = v24 - *((_DWORD *)v18 + 78);
      v22 = v10;
      v11 = 28LL * v24;
      v23 = v11;
      if ( v11 <= 0xFFFFFFFF )
      {
        if ( v10 )
        {
          if ( (unsigned int)v11 >= 0x2710000 )
            goto LABEL_21;
          v19 = 28 * v8;
          v12 = 28 * v8;
          ProbeForWrite(a3, 28 * v8, 8u);
          if ( 28 * v8 - 1 > 0x270FFFF )
          {
            PointerDeviceProperties = 0;
            UserSetLastError(1359);
            goto LABEL_26;
          }
          v13 = (struct tagPOINTER_DEVICE_PROPERTY *)Win32AllocPoolZInit(v12, 1668313941LL);
          v14 = v13;
          v20 = v13;
          if ( !v13 )
          {
LABEL_21:
            PointerDeviceProperties = 0;
            UserSetLastError(8);
            goto LABEL_26;
          }
          PointerDeviceProperties = GetPointerDeviceProperties(v18, v8, v13, v10);
          if ( PointerDeviceProperties )
          {
            memmove((void *)a3, v14, v12);
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
  if ( v20 )
    Win32FreePool(v20);
LABEL_28:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v21);
  UserSessionSwitchLeaveCrit(v16, v15);
  return PointerDeviceProperties;
}
