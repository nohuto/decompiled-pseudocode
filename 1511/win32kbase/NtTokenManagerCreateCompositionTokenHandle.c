/*
 * XREFs of NtTokenManagerCreateCompositionTokenHandle @ 0x1C004F6D0
 * Callers:
 *     <none>
 * Callees:
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1C001F5D0 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C0020C90 (Win32AllocPool.c)
 *     ?Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEAXPEAPEAVICompositionObject@@@Z3PEAPEAX@Z @ 0x1C0071FC8 (-Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEA.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 */

__int64 __fastcall NtTokenManagerCreateCompositionTokenHandle(
        char *Src,
        unsigned int a2,
        int a3,
        __int64 *a4,
        unsigned __int64 a5)
{
  __int64 *v5; // r15
  int v8; // ebx
  void *v9; // rdi
  __int64 v10; // r14
  size_t v11; // rsi
  int v12; // esi
  __int64 v13; // r9
  _QWORD *v14; // rdx
  HANDLE Handle; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+68h] [rbp-A0h]
  __int64 v18; // [rsp+70h] [rbp-98h]
  void *v19; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v20; // [rsp+80h] [rbp-88h]
  int v21; // [rsp+84h] [rbp-84h]
  __int64 v22; // [rsp+88h] [rbp-80h]
  int v23; // [rsp+90h] [rbp-78h] BYREF
  __int64 v24; // [rsp+98h] [rbp-70h]
  __int64 v25; // [rsp+A0h] [rbp-68h]
  int v26; // [rsp+A8h] [rbp-60h]
  __int64 v27; // [rsp+B0h] [rbp-58h]
  __int64 v28; // [rsp+B8h] [rbp-50h]
  __int64 v29; // [rsp+C0h] [rbp-48h]
  __int64 v30; // [rsp+110h] [rbp+8h] BYREF
  unsigned int v31; // [rsp+118h] [rbp+10h]
  int v32; // [rsp+120h] [rbp+18h]

  v32 = a3;
  v31 = a2;
  v5 = a4;
  v8 = 0;
  Handle = (HANDLE)-1LL;
  v9 = 0LL;
  v10 = 0LL;
  v30 = 0LL;
  if ( !Src || !a2 || !a3 || !a4 )
    v8 = -1073741811;
  if ( v8 >= 0 )
  {
    v29 = (a2 * (unsigned __int128)0x18uLL) >> 64;
    v11 = 24LL * a2;
    if ( is_mul_ok(a2, 0x18uLL) )
    {
      v17 = 24LL * a2;
      v8 = 0;
    }
    else
    {
      v11 = -1LL;
      v17 = -1LL;
      v8 = -1073741675;
    }
    if ( v8 < 0 )
      goto LABEL_37;
    v9 = (void *)Win32AllocPool();
    if ( !v9 )
      v8 = -1073741801;
    if ( v8 < 0 )
    {
LABEL_37:
      v12 = v32;
    }
    else
    {
      if ( &Src[v11] < Src || &Src[v11] > W32UserProbeAddress )
        *(_BYTE *)W32UserProbeAddress = 0;
      memmove(v9, Src, v11);
      if ( v5 + 1 < v5 || (unsigned __int64)(v5 + 1) > MmUserProbeAddress )
        v5 = (__int64 *)MmUserProbeAddress;
      v18 = *v5;
      v8 = 0;
      v12 = v32;
    }
    if ( v8 >= 0 )
    {
      v8 = UserAllocDefaultCompositionSecurityDescriptor(0x80000000, &v30);
      v10 = v30;
      if ( v8 >= 0 )
      {
        v23 = 48;
        v24 = 0LL;
        v26 = 0;
        v25 = 0LL;
        v27 = v30;
        v28 = 0LL;
        KeEnterCriticalRegion();
        v19 = v9;
        v20 = a2;
        v21 = v12;
        v22 = v18;
        LOBYTE(v13) = 1;
        v8 = CompositionObject::Create(0LL, &v23, 3LL, v13, 4, 128, CompositionTokenObject::ObjectInit, &v19, &Handle);
        KeLeaveCriticalRegion();
        if ( v8 >= 0 )
        {
          v14 = (_QWORD *)a5;
          if ( a5 )
          {
            if ( a5 + 8 < a5 || a5 + 8 > MmUserProbeAddress )
              *(_BYTE *)MmUserProbeAddress = 0;
            *v14 = Handle;
          }
          else
          {
            v8 = -1073741811;
          }
        }
      }
    }
  }
  if ( v10 )
    Win32FreePool();
  if ( v8 < 0 && Handle != (HANDLE)-1LL )
    NtClose(Handle);
  if ( v9 )
    Win32FreePool();
  return (unsigned int)v8;
}
