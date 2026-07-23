/*
 * XREFs of ObInitServerSilo @ 0x14057A53C
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x14067EA44 (PspInitializeServerSiloDeferred.c)
 *     ObInitSystem @ 0x1407A0370 (ObInitSystem.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     PsGetServerSiloGlobals @ 0x140076730 (PsGetServerSiloGlobals.c)
 *     PsIsHostSilo @ 0x140079FE8 (PsIsHostSilo.c)
 *     PsGetPermanentSiloContext @ 0x140091640 (PsGetPermanentSiloContext.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ObReferenceObjectByNameEx @ 0x1403E4434 (ObReferenceObjectByNameEx.c)
 *     ObOpenObjectByPointer @ 0x14041F280 (ObOpenObjectByPointer.c)
 */

int __fastcall ObInitServerSilo(__int64 a1)
{
  _QWORD *ServerSiloGlobals; // rdi
  _QWORD *v3; // rdx
  __int64 v4; // rax
  int result; // eax
  __int64 v6; // rdx
  int v7; // ebx
  PVOID v8; // rcx
  int v9; // [rsp+40h] [rbp-30h] BYREF
  HANDLE v10; // [rsp+48h] [rbp-28h]
  __int64 *v11; // [rsp+50h] [rbp-20h]
  int v12; // [rsp+58h] [rbp-18h]
  __int128 v13; // [rsp+60h] [rbp-10h]
  HANDLE Handle; // [rsp+88h] [rbp+18h] BYREF
  PVOID Object; // [rsp+90h] [rbp+20h] BYREF

  ServerSiloGlobals = PsGetServerSiloGlobals(a1);
  ServerSiloGlobals[15] = 0LL;
  v3 = ServerSiloGlobals + 16;
  ServerSiloGlobals[90] = 0LL;
  v4 = 37LL;
  do
  {
    v3[1] = v3;
    *v3 = v3;
    v3 += 2;
    --v4;
  }
  while ( v4 );
  if ( PsIsHostSilo(a1) )
    return 0;
  result = PsGetPermanentSiloContext(a1, PsObjectDirectorySiloContextSlot, (unsigned __int64 *)&Object);
  if ( result >= 0 )
  {
    result = ObOpenObjectByPointer(Object, 0x240u, 0LL, 2u, ObpDirectoryObjectType, 0, &Handle);
    if ( result >= 0 )
    {
      v10 = Handle;
      v9 = 48;
      v11 = &ObpGlobalDirectoryName;
      v12 = 576;
      v13 = 0LL;
      v7 = ObReferenceObjectByNameEx((__int64)&v9, v6, 2u, (__int64)ObpDirectoryObjectType, 0, 0LL, &Object);
      ZwClose(Handle);
      if ( v7 < 0 )
        return v7;
      v8 = Object;
      *ServerSiloGlobals = *((_QWORD *)Object + 38);
      ObfDereferenceObject(v8);
      return 0;
    }
  }
  return result;
}
