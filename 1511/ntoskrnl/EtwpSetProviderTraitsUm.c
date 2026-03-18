/*
 * XREFs of EtwpSetProviderTraitsUm @ 0x14046C820
 * Callers:
 *     NtTraceControl @ 0x140436E10 (NtTraceControl.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     EtwpGetProviderGroupFromTraits @ 0x14046CA90 (EtwpGetProviderGroupFromTraits.c)
 *     EtwpSetProviderTraitsCommon @ 0x14046CAE8 (EtwpSetProviderTraitsCommon.c)
 *     EtwpAddRegEntryToGroup @ 0x14046CBFC (EtwpAddRegEntryToGroup.c)
 */

__int64 __fastcall EtwpSetProviderTraitsUm(__int64 a1, int a2, __int64 a3)
{
  _QWORD *v6; // rsi
  NTSTATUS v7; // ebx
  unsigned __int16 v8; // ax
  ULONG64 v9; // rcx
  ULONG64 v10; // rdx
  char *PoolWithTag; // rax
  char *v12; // r15
  _WORD *v13; // rbx
  unsigned __int16 v14; // ax
  _BYTE *v15; // rbx
  unsigned __int64 v16; // rdx
  unsigned __int16 *i; // rbx
  int v18; // eax
  __int128 *ProviderGroupFromTraits; // rax
  PVOID Object[2]; // [rsp+40h] [rbp-58h] BYREF
  char *v22; // [rsp+50h] [rbp-48h]
  __int128 v23; // [rsp+58h] [rbp-40h] BYREF

  v6 = 0LL;
  v22 = 0LL;
  if ( *(_QWORD *)(a1 + 8) && *(_WORD *)(a1 + 16) )
  {
    v7 = ObReferenceObjectByHandle(*(HANDLE *)a1, 0x800u, EtwpRegistrationObjectType, 1, Object, 0LL);
    v6 = Object[0];
    Object[1] = Object[0];
    if ( v7 >= 0 )
    {
      if ( (*((_BYTE *)Object[0] + 98) & 8) != 0 )
      {
        v7 = -1073741811;
        goto LABEL_35;
      }
      if ( *((_QWORD *)Object[0] + 13) )
      {
        v7 = -1073741823;
        goto LABEL_35;
      }
      v8 = *(_WORD *)(a1 + 16);
      if ( v8 )
      {
        v9 = *(_QWORD *)(a1 + 8);
        v10 = v9 + v8;
        if ( v10 > MmUserProbeAddress || v10 < v9 )
          *(_BYTE *)MmUserProbeAddress = 0;
      }
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, *(unsigned __int16 *)(a1 + 16) + 28, 0x54777445u);
      v12 = PoolWithTag;
      v22 = PoolWithTag;
      if ( PoolWithTag )
      {
        v13 = PoolWithTag + 28;
        memmove(PoolWithTag + 28, *(const void **)(a1 + 8), *(unsigned __int16 *)(a1 + 16));
        v14 = *(_WORD *)(a1 + 16);
        if ( v14 < 3u )
        {
          v7 = -1073741566;
        }
        else if ( *v13 == v14 )
        {
          v15 = v13 + 1;
          v16 = (unsigned __int64)&v12[v14 + 28];
          while ( *v15 )
          {
            if ( ++v15 == (_BYTE *)v16 )
            {
              v7 = -1073741566;
              goto LABEL_33;
            }
          }
          for ( i = (unsigned __int16 *)(v15 + 1); (unsigned __int64)i < v16; i = (unsigned __int16 *)((char *)i + *i) )
          {
            if ( (unsigned __int64)(i + 1) > v16 )
            {
              v7 = -1073741566;
              goto LABEL_33;
            }
          }
          if ( (unsigned __int64)i > v16 )
          {
            v7 = -1073741566;
          }
          else
          {
            v18 = EtwpSetProviderTraitsCommon(v6, v12, &EtwpProviderTraitsUmMutex, &EtwpProviderTraitsUmTree);
            v7 = v18;
            if ( v18 >= 0 && !v6[5] )
            {
              ProviderGroupFromTraits = (__int128 *)EtwpGetProviderGroupFromTraits(v6[13] + 28LL);
              if ( ProviderGroupFromTraits )
              {
                v23 = *ProviderGroupFromTraits;
                v7 = EtwpAddRegEntryToGroup((_DWORD)v6, (unsigned int)&v23, a1, a2, a3);
              }
            }
          }
        }
        else
        {
          v7 = -1073741566;
        }
      }
      else
      {
        v7 = -1073741670;
      }
    }
  }
  else
  {
    v7 = -1073741811;
  }
LABEL_33:
  if ( !v7 )
    *((_BYTE *)v6 + 101) = 1;
LABEL_35:
  if ( v6 )
    ObfDereferenceObject(v6);
  return (unsigned int)v7;
}
