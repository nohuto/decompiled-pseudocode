/*
 * XREFs of CmpDoReOpenTransKey @ 0x1405ED434
 * Callers:
 *     CmpDoReDoCreateKey @ 0x1405ED040 (CmpDoReDoCreateKey.c)
 *     CmpDoReDoDeleteValue @ 0x1405ED144 (CmpDoReDoDeleteValue.c)
 *     CmpDoReDoRecord @ 0x1405ED194 (CmpDoReDoRecord.c)
 *     CmpDoReDoRenameKey @ 0x1405ED268 (CmpDoReDoRenameKey.c)
 *     CmpDoReDoSetKeyUserFlags @ 0x1405ED2B8 (CmpDoReDoSetKeyUserFlags.c)
 *     CmpDoReDoSetLastWriteTime @ 0x1405ED318 (CmpDoReDoSetLastWriteTime.c)
 *     CmpDoReDoSetSecurityDescriptor @ 0x1405ED378 (CmpDoReDoSetSecurityDescriptor.c)
 *     CmpDoReDoSetValueExisting @ 0x1405ED3CC (CmpDoReDoSetValueExisting.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByName @ 0x140422190 (ObOpenObjectByName.c)
 */

__int64 __fastcall CmpDoReOpenTransKey(__int64 a1, __m128i *a2, ACCESS_MASK a3, _QWORD *a4)
{
  __m128i v8; // xmm0
  PVOID v9; // rbx
  int v10; // r9d
  unsigned __int16 v11; // dx
  bool v12; // zf
  int v14; // edi
  PVOID v15; // rcx
  __int64 v16; // rsi
  PVOID v17; // rcx
  _QWORD v18[2]; // [rsp+40h] [rbp-C0h] BYREF
  __m128i v19; // [rsp+50h] [rbp-B0h] BYREF
  void *v20; // [rsp+60h] [rbp-A0h] BYREF
  int v21; // [rsp+68h] [rbp-98h] BYREF
  PVOID v22; // [rsp+70h] [rbp-90h]
  __m128i *v23; // [rsp+78h] [rbp-88h]
  int v24; // [rsp+80h] [rbp-80h]
  __int128 v25; // [rsp+88h] [rbp-78h]
  _DWORD v26[36]; // [rsp+A0h] [rbp-60h] BYREF
  PVOID Object; // [rsp+168h] [rbp+68h] BYREF

  memset(v26, 0, 136);
  v8 = *a2;
  memset(v18, 0, sizeof(v18));
  v9 = 0LL;
  v19 = v8;
  Object = 0LL;
  v20 = 0LL;
  v19.m128i_i16[0] = _mm_cvtsi128_si32(v8);
  if ( v19.m128i_i16[0] )
  {
    while ( 1 )
    {
      v23 = &v19;
      v21 = 48;
      v22 = 0LL;
      v24 = 576;
      v25 = 0LL;
      v10 = ObOpenObjectByName((__int64)&v21, (struct _OBJECT_TYPE *)CmKeyObjectType, 0, 0LL, a3, v26, &Object);
      if ( v10 >= 0 )
        break;
      v11 = v19.m128i_i16[0];
      if ( v19.m128i_i16[0] )
      {
        do
        {
          if ( *(_WORD *)(v19.m128i_i64[1] + 2 * ((unsigned __int64)v11 >> 1) - 2) == 92 )
            break;
          v12 = v11 == 2;
          v11 -= 2;
          v19.m128i_i16[0] = v11;
        }
        while ( !v12 );
      }
      LOWORD(v18[0]) = a2->m128i_i16[0] - v11;
      v19.m128i_i16[0] = v11 - 2;
      v18[1] = v19.m128i_i64[1] + 2 * ((unsigned __int64)v11 >> 1);
      if ( v11 == 2 )
        return (unsigned int)v10;
    }
    v9 = Object;
  }
  v14 = ObReferenceObjectByHandle(v9, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
  if ( v14 >= 0 )
  {
    v15 = Object;
    v16 = a1 + 80;
    *((_QWORD *)Object + 8) = v16;
    ObfDereferenceObject(v15);
    if ( LOWORD(v18[0]) )
    {
      v23 = (__m128i *)v18;
      v21 = 48;
      v22 = v9;
      v24 = 576;
      v25 = 0LL;
      v14 = ObOpenObjectByName((__int64)&v21, (struct _OBJECT_TYPE *)CmKeyObjectType, 0, 0LL, a3, v26, &v20);
      if ( v14 >= 0 )
      {
        v14 = ObReferenceObjectByHandle(v9, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
        if ( v14 >= 0 )
        {
          v17 = Object;
          *((_QWORD *)Object + 8) = v16;
          ObfDereferenceObject(v17);
        }
      }
      ZwClose(v9);
      v9 = v20;
    }
    *a4 = v9;
  }
  else
  {
    ZwClose(v9);
  }
  return (unsigned int)v14;
}
