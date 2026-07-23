/*
 * XREFs of EtwpSetProviderTraitsUm @ 0x14040851C
 * Callers:
 *     NtTraceControl @ 0x14040CC00 (NtTraceControl.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     EtwpGetProviderGroupFromTraits @ 0x14040879C (EtwpGetProviderGroupFromTraits.c)
 *     EtwpSetProviderTraitsCommon @ 0x1404087F4 (EtwpSetProviderTraitsCommon.c)
 *     EtwpAddRegEntryToGroup @ 0x14040B73C (EtwpAddRegEntryToGroup.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall EtwpSetProviderTraitsUm(__int64 a1, int a2, __int64 a3)
{
  _QWORD *v6; // rsi
  NTSTATUS v7; // ebx
  __int16 v8; // ax
  unsigned __int16 v9; // ax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  char *PoolWithTag; // rax
  char *v13; // r15
  _WORD *v14; // rbx
  unsigned __int16 v15; // ax
  _BYTE *v16; // rbx
  unsigned __int64 v17; // rdx
  unsigned __int16 *i; // rbx
  __int128 *ProviderGroupFromTraits; // rax
  PVOID Object; // [rsp+40h] [rbp-58h] BYREF
  char *v22; // [rsp+48h] [rbp-50h]
  PVOID v23; // [rsp+50h] [rbp-48h]
  __int128 v24; // [rsp+58h] [rbp-40h] BYREF

  v6 = 0LL;
  v22 = 0LL;
  if ( *(_QWORD *)(a1 + 8) && *(_WORD *)(a1 + 16) )
  {
    v7 = ObReferenceObjectByHandle(*(HANDLE *)a1, 0x800u, EtwpRegistrationObjectType, 1, &Object, 0LL);
    v6 = Object;
    v23 = Object;
    if ( v7 >= 0 )
    {
      v8 = *((_WORD *)Object + 49);
      if ( (v8 & 8) != 0 || (v8 & 2) == 0 )
      {
        v7 = -1073741811;
        goto LABEL_38;
      }
      if ( *((_QWORD *)Object + 13) )
      {
        v7 = -1073741823;
        goto LABEL_38;
      }
      v9 = *(_WORD *)(a1 + 16);
      if ( v9 )
      {
        v10 = *(_QWORD *)(a1 + 8);
        v11 = v10 + v9;
        if ( v11 > 0x7FFFFFFF0000LL || v11 < v10 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, *(unsigned __int16 *)(a1 + 16) + 28, 0x54777445u);
      v13 = PoolWithTag;
      v22 = PoolWithTag;
      if ( PoolWithTag )
      {
        v14 = PoolWithTag + 28;
        memmove(PoolWithTag + 28, *(const void **)(a1 + 8), *(unsigned __int16 *)(a1 + 16));
        v15 = *(_WORD *)(a1 + 16);
        if ( v15 >= 3u )
        {
          if ( *v14 == v15 )
          {
            v16 = v14 + 1;
            v17 = (unsigned __int64)&v13[v15 + 28];
            while ( *v16 )
            {
              if ( ++v16 == (_BYTE *)v17 )
              {
                v7 = -1073741566;
                goto LABEL_36;
              }
            }
            for ( i = (unsigned __int16 *)(v16 + 1); (unsigned __int64)i < v17; i = (unsigned __int16 *)((char *)i + *i) )
            {
              if ( (unsigned __int64)(i + 1) > v17 )
              {
                v7 = -1073741566;
                goto LABEL_36;
              }
            }
            if ( (unsigned __int64)i <= v17 )
            {
              v7 = EtwpSetProviderTraitsCommon(v6, v13, &EtwpProviderTraitsUmMutex, &EtwpProviderTraitsUmTree);
              if ( v7 >= 0 && !v6[5] )
              {
                ProviderGroupFromTraits = (__int128 *)EtwpGetProviderGroupFromTraits(v6[13] + 28LL);
                if ( ProviderGroupFromTraits )
                {
                  v24 = *ProviderGroupFromTraits;
                  v7 = EtwpAddRegEntryToGroup((_DWORD)v6, (unsigned int)&v24, a1, a2, a3);
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
            v7 = -1073741566;
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
LABEL_36:
  if ( !v7 )
    *((_BYTE *)v6 + 102) = 1;
LABEL_38:
  if ( v6 )
    ObfDereferenceObject(v6);
  return (unsigned int)v7;
}
