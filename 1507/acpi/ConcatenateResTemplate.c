/*
 * XREFs of ConcatenateResTemplate @ 0x1C0047A60
 * Callers:
 *     <none>
 * Callees:
 *     WriteObject @ 0x1C0012B10 (WriteObject.c)
 *     ValidateArgTypes @ 0x1C0013180 (ValidateArgTypes.c)
 *     HeapAlloc @ 0x1C0013430 (HeapAlloc.c)
 *     ValidateTarget @ 0x1C0015618 (ValidateTarget.c)
 *     LogError @ 0x1C00442B8 (LogError.c)
 *     CheckAndPromoteAliasedObjects @ 0x1C0044D98 (CheckAndPromoteAliasedObjects.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
 */

__int64 __fastcall ConcatenateResTemplate(__int64 a1, __int64 a2)
{
  char v4; // bl
  unsigned int v5; // esi
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int16 *v8; // rcx
  unsigned int v9; // esi
  int v10; // ecx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned __int64 v13; // r9
  char v14; // al
  __int64 v15; // rcx
  unsigned __int64 v16; // r9
  char v17; // al
  unsigned int v18; // ecx
  _BYTE *v19; // rax
  __int64 v20; // rdx
  __int64 v22; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  v5 = ValidateArgTypes(*(_QWORD *)(a2 + 80), 0, (__int64)"BB");
  if ( !v5 )
  {
    v6 = *(_QWORD *)(a2 + 80);
    if ( *(_DWORD *)(v6 + 24) <= 1u || *(_DWORD *)(v6 + 64) <= 1u )
    {
      v5 = -1072431098;
      LogError(-1072431098);
      v10 = 28;
      goto LABEL_17;
    }
    v5 = ValidateTarget(v6 + 80, 0x87u, (__int64)&v22);
    if ( !v5 )
    {
      v8 = *(__int16 **)(a2 + 80);
      if ( v8[41] != 128 )
        CheckAndPromoteAliasedObjects(v8, v7, v22);
      *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 3;
      v9 = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 64LL) - 2 + *(_DWORD *)(*(_QWORD *)(a2 + 80) + 24LL);
      *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = v9;
      *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = HeapAlloc(gpheapGlobal, 1381258056, v9);
      if ( !*(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) )
      {
        v5 = -1073741670;
        LogError(-1073741670);
        v10 = 29;
LABEL_17:
        PrintDebugMessage(v10, 0LL, 0LL, 0LL, 0LL);
        return v5;
      }
      v11 = *(_QWORD *)(a2 + 80);
      v12 = 0LL;
      v13 = 0LL;
      if ( *(_DWORD *)(v11 + 24) != 2 )
      {
        do
        {
          v14 = *(_BYTE *)(v13 + *(_QWORD *)(v11 + 32));
          ++v13;
          *(_BYTE *)(v12 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = v14;
          ++v12;
          v11 = *(_QWORD *)(a2 + 80);
        }
        while ( v13 < (unsigned int)(*(_DWORD *)(v11 + 24) - 2) );
      }
      v15 = *(_QWORD *)(a2 + 80);
      v16 = 0LL;
      if ( *(_DWORD *)(v15 + 64) != 2 )
      {
        do
        {
          v17 = *(_BYTE *)(v16 + *(_QWORD *)(v15 + 72));
          ++v16;
          *(_BYTE *)(v12 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = v17;
          ++v12;
          v15 = *(_QWORD *)(a2 + 80);
        }
        while ( v16 < (unsigned int)(*(_DWORD *)(v15 + 64) - 2) );
      }
      *(_BYTE *)(v12 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = 121;
      v18 = v9 - 1;
      v19 = *(_BYTE **)(*(_QWORD *)(a2 + 88) + 32LL);
      if ( v9 != 1 )
      {
        do
        {
          v4 += *v19++;
          --v18;
        }
        while ( v18 );
      }
      v20 = v22;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) + v12 + 1) = -v4;
      return (unsigned int)WriteObject(a1, v20, *(_QWORD *)(a2 + 88));
    }
  }
  return v5;
}
