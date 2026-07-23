/*
 * XREFs of SeGetLogonSessionToken @ 0x140692B88
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     SepDuplicateToken @ 0x140411A90 (SepDuplicateToken.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     ObInsertObject @ 0x1404702F4 (ObInsertObject.c)
 */

NTSTATUS __fastcall SeGetLogonSessionToken(void *a1, KPROCESSOR_MODE a2, HANDLE *a3)
{
  NTSTATUS result; // eax
  PVOID v6; // rdi
  __int64 v7; // rcx
  int inserted; // ebx
  HANDLE Handle; // [rsp+40h] [rbp-40h] BYREF
  int v10; // [rsp+48h] [rbp-38h] BYREF
  __int64 v11; // [rsp+50h] [rbp-30h]
  __int64 v12; // [rsp+58h] [rbp-28h]
  int v13; // [rsp+60h] [rbp-20h]
  __int128 v14; // [rsp+68h] [rbp-18h]
  PVOID Object; // [rsp+A8h] [rbp+28h] BYREF

  result = ObReferenceObjectByHandle(a1, 8u, (POBJECT_TYPE)SeTokenObjectType, a2, &Object, 0LL);
  if ( result >= 0 )
  {
    v6 = Object;
    v7 = *(_QWORD *)(*((_QWORD *)Object + 27) + 48LL);
    if ( v7 )
    {
      v11 = 0LL;
      v10 = 48;
      v14 = 0LL;
      v12 = 0LL;
      v13 = a2 == 0 ? 0x200 : 0;
      inserted = SepDuplicateToken(v7, (int)&v10, 0, 1, 0, 0, 0, (char **)&Object);
      if ( inserted >= 0 )
      {
        inserted = ObInsertObject(Object, 0LL, 0xF01FFu, 0, 0LL, &Handle);
        if ( inserted >= 0 )
          *a3 = Handle;
      }
    }
    else
    {
      inserted = -1073741700;
    }
    ObfDereferenceObject(v6);
    return inserted;
  }
  return result;
}
