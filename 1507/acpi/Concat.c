/*
 * XREFs of Concat @ 0x1C0047810
 * Callers:
 *     <none>
 * Callees:
 *     WriteObject @ 0x1C0012B10 (WriteObject.c)
 *     ValidateArgTypes @ 0x1C0013180 (ValidateArgTypes.c)
 *     HeapAlloc @ 0x1C0013430 (HeapAlloc.c)
 *     ValidateTarget @ 0x1C0015618 (ValidateTarget.c)
 *     IsCompatableDSDTRevision @ 0x1C001875C (IsCompatableDSDTRevision.c)
 *     memmove @ 0x1C0023800 (memmove.c)
 *     LogError @ 0x1C00442B8 (LogError.c)
 *     CheckAndPromoteAliasedObjects @ 0x1C0044D98 (CheckAndPromoteAliasedObjects.c)
 *     GetObjectTypeName @ 0x1C0044FFC (GetObjectTypeName.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
 */

__int64 __fastcall Concat(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int16 *v6; // rcx
  __int64 v7; // r11
  const void *ObjectTypeName; // rbx
  const void *v9; // rdx
  __int16 v10; // cx
  __int64 v11; // rax
  bool v12; // zf
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // edx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int16 v19; // ax
  bool v20; // al
  __int64 v21; // rdx
  _QWORD *v22; // rcx
  void *v23; // rcx
  __int64 v24; // rdx
  void *v25; // rcx
  __int64 v27; // [rsp+48h] [rbp+10h] BYREF

  v4 = ValidateArgTypes(*(_QWORD *)(a2 + 80), 0, (__int64)"DD");
  if ( !v4 )
  {
    v4 = ValidateTarget(*(_QWORD *)(a2 + 80) + 80LL, 0x87u, (__int64)&v27);
    if ( !v4 )
    {
      v6 = *(__int16 **)(a2 + 80);
      if ( v6[1] == v6[21] )
      {
        if ( v6[41] != 128 )
          CheckAndPromoteAliasedObjects(v6, v5, v27);
        v10 = *(_WORD *)(*(_QWORD *)(a2 + 80) + 2LL);
        v11 = *(_QWORD *)(a2 + 88);
        if ( v10 == 1 )
        {
          *(_WORD *)(v11 + 2) = 3;
          v12 = !IsCompatableDSDTRevision();
          v13 = *(_QWORD *)(a2 + 88);
          if ( v12 )
            *(_DWORD *)(v13 + 24) = 8;
          else
            *(_DWORD *)(v13 + 24) = 16;
        }
        else
        {
          *(_WORD *)(v11 + 2) = v10;
          *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 24LL)
                                                   + *(_DWORD *)(*(_QWORD *)(a2 + 80) + 64LL);
          v14 = *(_QWORD *)(a2 + 88);
          if ( *(_WORD *)(v14 + 2) == 2 )
            --*(_DWORD *)(v14 + 24);
        }
        v15 = *(_QWORD *)(a2 + 88);
        v16 = 1381258056;
        if ( *(_WORD *)(v15 + 2) != 2 )
          v16 = 1179992648;
        v17 = HeapAlloc(gpheapGlobal, v16, *(_DWORD *)(v15 + 24));
        *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v17;
        if ( v17 )
        {
          v18 = *(_QWORD *)(a2 + 80);
          v19 = *(_WORD *)(v18 + 2);
          if ( v19 == 1 )
          {
            v20 = IsCompatableDSDTRevision();
            v21 = *(_QWORD *)(a2 + 80);
            v22 = *(_QWORD **)(*(_QWORD *)(a2 + 88) + 32LL);
            if ( v20 )
            {
              *v22 = *(_QWORD *)(v21 + 16);
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) + 8LL) = *(_QWORD *)(*(_QWORD *)(a2 + 80) + 56LL);
            }
            else
            {
              *(_DWORD *)v22 = *(_DWORD *)(v21 + 16);
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) + 4LL) = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 56LL);
            }
          }
          else
          {
            v23 = *(void **)(*(_QWORD *)(a2 + 88) + 32LL);
            if ( v19 == 2 )
            {
              memmove(v23, *(const void **)(v18 + 32), (unsigned int)(*(_DWORD *)(v18 + 24) - 1));
              v24 = *(_QWORD *)(a2 + 80);
              v25 = (void *)(*(unsigned int *)(v24 + 24) + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) - 1LL);
            }
            else
            {
              memmove(v23, *(const void **)(v18 + 32), *(unsigned int *)(v18 + 24));
              v24 = *(_QWORD *)(a2 + 80);
              v25 = (void *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) + *(unsigned int *)(v24 + 24));
            }
            memmove(v25, *(const void **)(v24 + 72), *(unsigned int *)(v24 + 64));
          }
          return (unsigned int)WriteObject(a1, v27, *(_QWORD *)(a2 + 88));
        }
        else
        {
          v4 = -1073741670;
          LogError(-1073741670);
          PrintDebugMessage(27, 0LL, 0LL, 0LL, 0LL);
        }
      }
      else
      {
        v4 = -1072431095;
        LogError(-1072431095);
        ObjectTypeName = (const void *)GetObjectTypeName(*(unsigned __int16 *)(*(_QWORD *)(a2 + 80) + 42LL));
        v9 = (const void *)GetObjectTypeName(*(unsigned __int16 *)(v7 + 2));
        PrintDebugMessage(26, v9, ObjectTypeName, 0LL, 0LL);
      }
    }
  }
  return v4;
}
