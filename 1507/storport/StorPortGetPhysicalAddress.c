/*
 * XREFs of StorPortGetPhysicalAddress @ 0x1C0010DF0
 * Callers:
 *     StorPortGetPhysicalAddressVrfy @ 0x1C00561F0 (StorPortGetPhysicalAddressVrfy.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C0020990 (GetSrbScsiData.c)
 *     RaidSrbExGetBidirectionalData @ 0x1C002E690 (RaidSrbExGetBidirectionalData.c)
 */

PHYSICAL_ADDRESS __fastcall StorPortGetPhysicalAddress(__int64 a1, __int64 a2, void *a3, unsigned int *a4)
{
  __int64 *v4; // rax
  unsigned __int64 v6; // rdx
  unsigned __int8 v7; // r15
  unsigned __int64 v8; // rbp
  __int64 v10; // rdi
  unsigned int v11; // r9d
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r12
  unsigned int v15; // r13d
  unsigned __int64 v16; // rcx
  PHYSICAL_ADDRESS result; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // ebx
  int v21; // eax
  __int64 BidirectionalData; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  unsigned int *v26; // rdx
  unsigned int v27; // ebx
  __int64 v28; // rax
  unsigned int v29; // ecx
  unsigned int *v30; // r8
  unsigned __int64 v31; // [rsp+30h] [rbp-58h]
  unsigned __int64 v32; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v33; // [rsp+40h] [rbp-48h]
  __int64 v34; // [rsp+90h] [rbp+8h] BYREF
  int v35; // [rsp+98h] [rbp+10h]
  unsigned int v36; // [rsp+A0h] [rbp+18h]

  v4 = *(__int64 **)(a1 - 16);
  v6 = 0LL;
  v7 = 0;
  v8 = 0LL;
  LODWORD(v31) = 0;
  LOBYTE(v34) = 0;
  v10 = *v4;
  v11 = 0;
  v36 = 0;
  v13 = 0LL;
  v32 = 0LL;
  v14 = 0LL;
  v33 = 0LL;
  v15 = 0;
  if ( a2 )
  {
    LOBYTE(v21) = *(_BYTE *)(a2 + 2);
    if ( (_BYTE)v21 == 40 )
    {
      v15 = *(_DWORD *)(a2 + 60);
      v14 = *(_QWORD *)(a2 + 64);
      v31 = *(_QWORD *)(a2 + 104);
      v35 = *(_DWORD *)(a2 + 20);
      if ( !v35 )
      {
        GetSrbScsiData(a2, 0, 0, 0, (__int64)&v32, (__int64)&v34);
        v7 = v34;
        v8 = v32;
      }
      BidirectionalData = RaidSrbExGetBidirectionalData(a2);
      v6 = v31;
      if ( BidirectionalData )
      {
        v13 = *(_QWORD *)(BidirectionalData + 16);
        v11 = *(_DWORD *)(BidirectionalData + 8);
      }
      else
      {
        v13 = v33;
        v11 = v36;
      }
      v21 = v35;
    }
    else
    {
      v6 = *(_QWORD *)(a2 + 56);
      v15 = *(_DWORD *)(a2 + 16);
      v14 = *(_QWORD *)(a2 + 24);
      v21 = (unsigned __int8)v21;
      LODWORD(v31) = v6;
      if ( !(_BYTE)v21 )
      {
        v8 = *(_QWORD *)(a2 + 32);
        v7 = *(_BYTE *)(a2 + 11);
      }
    }
    if ( v21 == 23 )
    {
      v23 = *(_BYTE *)(a2 + 2) == 40 ? *(_QWORD *)(a2 + 96) : *(_QWORD *)(a2 + 48);
      v24 = *(_QWORD *)(v23 + 96);
      if ( *(_DWORD *)(v24 + 40) > v15 )
        v15 = *(_DWORD *)(v24 + 40);
    }
  }
  v16 = *(_QWORD *)(v10 + 728);
  if ( v16 <= (unsigned __int64)a3 && (unsigned __int64)a3 < v16 + *(unsigned int *)(v10 + 744) )
  {
    v18 = *(_QWORD *)(v10 + 728);
    if ( v16 > (unsigned __int64)a3 )
      return (PHYSICAL_ADDRESS)v34;
    v19 = *(unsigned int *)(v10 + 744);
    if ( (unsigned __int64)a3 >= v18 + v19 )
    {
      return (PHYSICAL_ADDRESS)v34;
    }
    else
    {
      v20 = (_DWORD)a3 - v18;
      result.QuadPart = *(_QWORD *)(v10 + 736) + v20;
      if ( a4 )
        *a4 = v19 - v20;
    }
  }
  else if ( a2 )
  {
    if ( (v14 > (unsigned __int64)a3 || (unsigned __int64)a3 >= v14 + v15)
      && (v13 > (unsigned __int64)a3 || (unsigned __int64)a3 >= v13 + v11) )
    {
      if ( v8 <= (unsigned __int64)a3 && (unsigned __int64)a3 < v8 + v7 )
      {
        result = MmGetPhysicalAddress(a3);
        *a4 = v8 + v7 - (_DWORD)a3;
        return result;
      }
      if ( v6 <= (unsigned __int64)a3 && (unsigned __int64)a3 < v6 + ((*(_DWORD *)(v10 + 444) + 7) & 0xFFFFFFF8) )
      {
        result = MmGetPhysicalAddress(a3);
        *a4 = v31 + ((*(_DWORD *)(v10 + 444) + 7) & 0xFFFFFFF8) - (_DWORD)a3;
        return result;
      }
    }
    else
    {
      if ( *(_BYTE *)(a2 + 2) == 40 )
        v25 = *(_QWORD *)(a2 + 96);
      else
        v25 = *(_QWORD *)(a2 + 48);
      if ( v14 > (unsigned __int64)a3 || (unsigned __int64)a3 >= v14 + v15 )
      {
        v26 = *(unsigned int **)(v25 + 144);
        v27 = (_DWORD)a3 - v13;
      }
      else
      {
        v26 = *(unsigned int **)(v25 + 104);
        v27 = (_DWORD)a3 - v14;
      }
      v28 = 0LL;
      if ( v26 )
      {
        v29 = *v26;
        if ( *v26 )
        {
          v30 = v26 + 6;
          do
          {
            if ( v27 < *v30 )
              break;
            v27 -= *v30;
            v28 = (unsigned int)(v28 + 1);
            v30 += 6;
          }
          while ( (unsigned int)v28 < v29 );
        }
        if ( (unsigned int)v28 < v29 )
        {
          *a4 = v26[6 * v28 + 6] - v27;
          return (PHYSICAL_ADDRESS)(*(_QWORD *)&v26[6 * v28 + 4] + v27);
        }
      }
    }
    result.QuadPart = 0LL;
    *a4 = 0;
  }
  else
  {
    result = MmGetPhysicalAddress(a3);
    *a4 = (*(_DWORD *)(v10 + 444) + 7) & 0xFFFFFFF8;
  }
  return result;
}
