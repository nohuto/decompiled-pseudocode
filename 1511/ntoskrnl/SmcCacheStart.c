/*
 * XREFs of SmcCacheStart @ 0x140658E6C
 * Callers:
 *     SmcProcessCreateRequest @ 0x1406581B8 (SmcProcessCreateRequest.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     StEtaStart @ 0x1400F98F4 (StEtaStart.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     SmKmStoreFileCreate @ 0x14065AEBC (SmKmStoreFileCreate.c)
 *     SmKmStoreFileOpenVolume @ 0x14065BB3C (SmKmStoreFileOpenVolume.c)
 *     SmKmVolumeQueryUniqueId @ 0x14065BEB4 (SmKmVolumeQueryUniqueId.c)
 */

__int64 __fastcall SmcCacheStart(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ecx
  int v5; // r10d
  PVOID v7; // r14
  int UniqueId; // ebx
  unsigned __int64 v9; // r15
  int v10; // r8d
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // ecx
  unsigned int *v14; // rax
  __int64 *v15; // rax
  __int64 v17; // [rsp+60h] [rbp-49h] BYREF
  __int64 v18; // [rsp+68h] [rbp-41h] BYREF
  PVOID Object; // [rsp+70h] [rbp-39h] BYREF
  _DWORD v20[2]; // [rsp+78h] [rbp-31h] BYREF
  PVOID *p_Object; // [rsp+80h] [rbp-29h] BYREF
  __int64 *v22; // [rsp+88h] [rbp-21h]
  _QWORD v23[5]; // [rsp+90h] [rbp-19h] BYREF
  int v24; // [rsp+B8h] [rbp+Fh]
  int v25; // [rsp+BCh] [rbp+13h]

  v4 = *(_DWORD *)(a2 + 8);
  v5 = a3;
  Object = 0LL;
  v7 = 0LL;
  if ( !v4 || ((v4 - 1) & v4) != 0 )
  {
    UniqueId = -1073741811;
    goto LABEL_26;
  }
  if ( !*(_QWORD *)a2 )
    return (unsigned int)-1073741811;
  if ( *(_QWORD *)a2 > 0x800000000uLL )
    return (unsigned int)-1073739516;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 16);
  if ( (a3 & 1) != 0 )
    v9 = a3 & 0xFFFFFFFFFFFFFFFEuLL;
  else
    v9 = 0LL;
  v10 = *(_DWORD *)(a1 + 24);
  v20[0] = *(_DWORD *)(a2 + 12) & 1;
  v17 = *(_QWORD *)a2;
  UniqueId = SmKmStoreFileCreate((int)a1 + 4, v5, v10, v10, (__int64)&v17);
  if ( UniqueId >= 0 )
  {
    if ( v9 && v17 != *(_QWORD *)a2 )
      return (unsigned int)-1073741792;
    *(_DWORD *)(a1 + 28) = v20[0] & 1 | *(_DWORD *)(a1 + 28) & 0xFFFFFFFC | (2 * (v18 & 1));
    v11 = *(_QWORD *)(a1 + 64);
    v17 = v11;
    if ( v11 )
      goto LABEL_17;
    v12 = SmKmStoreFileOpenVolume(*(_QWORD *)(a1 + 48), &Object, &v17);
    v7 = Object;
    UniqueId = v12;
    if ( v12 >= 0 )
    {
      v11 = v17;
LABEL_17:
      UniqueId = SmKmVolumeQueryUniqueId(v11, a1 + 552, 512LL);
      if ( UniqueId >= 0 )
      {
        v13 = *(_DWORD *)(a1 + 24);
        v23[1] = 4096LL;
        v23[2] = 0x2000LL;
        v23[0] = 2048LL;
        v23[3] = 0x4000LL;
        v23[4] = 0x8000LL;
        v24 = -1;
        v25 = 0;
        v17 = 0x5F5E100FFFFFFFFLL;
        Object = (PVOID)0xFFFFFFFFLL;
        v20[0] = -1;
        v20[1] = 0;
        p_Object = 0LL;
        v22 = 0LL;
        v18 = 0LL;
        if ( v13 )
        {
          v14 = (unsigned int *)v23;
          if ( v13 > 0x800 )
          {
            do
              v14 += 2;
            while ( *v14 < v13 );
          }
          *v14 = -1;
          p_Object = (PVOID *)v23;
          v15 = &v17;
        }
        else
        {
          p_Object = &Object;
          v15 = (__int64 *)v20;
        }
        v22 = v15;
        v18 = 983104LL;
        UniqueId = StEtaStart(a1 + 104, (int **)&p_Object, &v18);
        if ( UniqueId >= 0 )
          UniqueId = 0;
      }
    }
LABEL_26:
    if ( v7 )
      ObfDereferenceObject(v7);
  }
  return (unsigned int)UniqueId;
}
