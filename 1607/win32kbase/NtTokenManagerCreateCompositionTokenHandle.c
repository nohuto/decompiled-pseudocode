/*
 * XREFs of NtTokenManagerCreateCompositionTokenHandle @ 0x1C004CA70
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C0034690 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1C003A440 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     ?Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEAXPEAPEAVICompositionObject@@@Z3PEAPEAX@Z @ 0x1C00483A4 (-Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEA.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
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
  __int64 v16; // [rsp+28h] [rbp-E0h]
  HANDLE Handle; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+68h] [rbp-A0h]
  __int64 v19; // [rsp+70h] [rbp-98h]
  void *v20; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v21; // [rsp+80h] [rbp-88h]
  int v22; // [rsp+84h] [rbp-84h]
  __int64 v23; // [rsp+88h] [rbp-80h]
  int v24; // [rsp+90h] [rbp-78h] BYREF
  __int64 v25; // [rsp+98h] [rbp-70h]
  __int64 v26; // [rsp+A0h] [rbp-68h]
  int v27; // [rsp+A8h] [rbp-60h]
  __int64 v28; // [rsp+B0h] [rbp-58h]
  __int64 v29; // [rsp+B8h] [rbp-50h]
  __int64 v30; // [rsp+C0h] [rbp-48h]
  __int64 v31; // [rsp+110h] [rbp+8h] BYREF
  unsigned int v32; // [rsp+118h] [rbp+10h]
  int v33; // [rsp+120h] [rbp+18h]

  v33 = a3;
  v32 = a2;
  v5 = a4;
  v8 = 0;
  Handle = (HANDLE)-1LL;
  v9 = 0LL;
  v10 = 0LL;
  v31 = 0LL;
  if ( !Src || !a2 || !a3 || !a4 )
    v8 = -1073741811;
  if ( v8 >= 0 )
  {
    v30 = (a2 * (unsigned __int128)0x18uLL) >> 64;
    v11 = 24LL * a2;
    if ( is_mul_ok(a2, 0x18uLL) )
    {
      v18 = 24LL * a2;
      v8 = 0;
    }
    else
    {
      v11 = -1LL;
      v18 = -1LL;
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
      v12 = v33;
    }
    else
    {
      if ( &Src[v11] < Src || (unsigned __int64)&Src[v11] > W32UserProbeAddress )
        *(_BYTE *)W32UserProbeAddress = 0;
      memmove(v9, Src, v11);
      if ( v5 + 1 < v5 || (unsigned __int64)(v5 + 1) > MmUserProbeAddress )
        v5 = (__int64 *)MmUserProbeAddress;
      v19 = *v5;
      v8 = 0;
      v12 = v33;
    }
    if ( v8 >= 0 )
    {
      v8 = UserAllocDefaultCompositionSecurityDescriptor(0x80000000, &v31);
      v10 = v31;
      if ( v8 >= 0 )
      {
        v24 = 48;
        v25 = 0LL;
        v27 = 0;
        v26 = 0LL;
        v28 = v31;
        v29 = 0LL;
        KeEnterCriticalRegion();
        v20 = v9;
        v21 = a2;
        v22 = v12;
        v23 = v19;
        LODWORD(v16) = 128;
        LOBYTE(v13) = 1;
        v8 = CompositionObject::Create(
               0LL,
               (__int64)&v24,
               3u,
               v13,
               4,
               v16,
               (__int64 (__fastcall *)(_QWORD, __int64, __int64))CompositionTokenObject::ObjectInit,
               (__int64)&v20,
               &Handle);
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
