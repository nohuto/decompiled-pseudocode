/*
 * XREFs of ACPIProcessorGetInitialApicId @ 0x1C006D3D8
 * Callers:
 *     ACPIProcessorStartDevice @ 0x1C001AC80 (ACPIProcessorStartDevice.c)
 * Callees:
 *     ACPIGet @ 0x1C0001B00 (ACPIGet.c)
 *     AMLIGetNSObjectType @ 0x1C0003814 (AMLIGetNSObjectType.c)
 */

__int64 __fastcall ACPIProcessorGetInitialApicId(__int64 a1, _DWORD *a2)
{
  int v2; // ebp
  char v5; // bl
  __int64 v6; // rcx
  char *v7; // r8
  unsigned int v8; // ecx
  char *v9; // r14
  unsigned __int64 v10; // r10
  char i; // r9
  char *v12; // rdx
  unsigned __int8 v13; // cl
  char *v14; // r11
  char v15; // al
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  __int64 result; // rax
  _DWORD *v20; // rdx
  bool v21; // zf
  __int64 v22; // rcx
  unsigned int v23; // [rsp+80h] [rbp+8h] BYREF
  char *v24; // [rsp+88h] [rbp+10h] BYREF

  *a2 = -1;
  v2 = *(_DWORD *)(a1 + 188);
  v24 = 0LL;
  v23 = 0;
  v5 = 1;
  if ( (int)ACPIGet((_QWORD *)a1, 1413565791, 268501000, 0LL, 0, 0LL, 0LL, (__int64)&v24, (__int64)&v23) >= 0 )
  {
    v7 = v24;
    v8 = v23;
  }
  else
  {
    v6 = *((_QWORD *)AcpiInformation + 4);
    if ( !v6 )
      return 3221225473LL;
    v7 = (char *)(v6 + 44);
    v5 = 0;
    v24 = (char *)(v6 + 44);
    v8 = *(_DWORD *)(*((_QWORD *)AcpiInformation + 4) + 4LL) - 44;
    v23 = v8;
  }
  if ( !v7 )
    return 3221225473LL;
  v9 = v7 + 2;
  v10 = (unsigned __int64)&v7[v8];
  for ( i = 0; ; i = 1 )
  {
    v12 = v7;
    if ( (unsigned __int64)v9 <= v10 )
    {
      do
      {
        v13 = v12[1];
        if ( v13 < 2u )
          break;
        v14 = &v12[v13];
        if ( (unsigned __int64)v14 > v10 )
          break;
        v15 = *v12;
        if ( !*v12 && v13 >= 8u )
        {
          if ( ((unsigned int)AMLIGetNSObjectType(*(_QWORD *)(a1 + 704)) == 12
             || (unsigned int)AMLIGetNSObjectType(v17) == 6 && (*(_QWORD *)a1 & 0x1000000000LL) != 0)
            && *(unsigned __int8 *)(v16 + 2) == v2
            || v5 && i )
          {
            v18 = *(unsigned __int8 *)(v16 + 3);
LABEL_17:
            *a2 = v18;
            break;
          }
          goto LABEL_14;
        }
        if ( v15 == 9 && v13 >= 0x10u )
        {
          if ( (unsigned int)AMLIGetNSObjectType(*(_QWORD *)(a1 + 704)) != 6 || (*(_QWORD *)a1 & 0x1000000000LL) == 0 )
            goto LABEL_43;
          v21 = v20[3] == v2;
        }
        else
        {
          if ( v15 != 11 || v13 < 0x28u )
            goto LABEL_14;
          if ( ((unsigned int)AMLIGetNSObjectType(*(_QWORD *)(a1 + 704)) != 6 || (*(_QWORD *)a1 & 0x1000000000LL) == 0)
            && (unsigned int)AMLIGetNSObjectType(v22) != 12 )
          {
            goto LABEL_43;
          }
          v21 = v20[2] == v2;
        }
        if ( v21 )
          goto LABEL_45;
LABEL_43:
        if ( v5 && i )
        {
LABEL_45:
          v18 = v20[1];
          goto LABEL_17;
        }
LABEL_14:
        v12 = v14;
      }
      while ( (unsigned __int64)(v14 + 2) <= v10 );
    }
    if ( *a2 != -1 )
      break;
    if ( !v5 )
      goto LABEL_21;
    if ( i )
      break;
  }
  if ( v5 )
    ExFreePoolWithTag(v7, 0);
LABEL_21:
  result = 3221225473LL;
  if ( *a2 != -1 )
    return 0LL;
  return result;
}
