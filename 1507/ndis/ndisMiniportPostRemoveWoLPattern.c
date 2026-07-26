/*
 * XREFs of ndisMiniportPostRemoveWoLPattern @ 0x1C0044CD4
 * Callers:
 *     ndisOidPostPMRemoveWOLPattern @ 0x1C0044DF0 (ndisOidPostPMRemoveWOLPattern.c)
 *     ndisPostSetRemoveWakeUpPattern @ 0x1C0045450 (ndisPostSetRemoveWakeUpPattern.c)
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C000E404 (ndisGetOidSourceHandle.c)
 *     ndisGetPatternEffectivePriority @ 0x1C004453C (ndisGetPatternEffectivePriority.c)
 */

void __fastcall ndisMiniportPostRemoveWoLPattern(__int64 a1, __int64 a2)
{
  __int64 OidSourceHandle; // rax
  __int64 v3; // rcx
  __int64 v4; // r10
  __int64 *v5; // r10
  __int64 v6; // r11
  __int64 v7; // rax
  int v8; // ecx
  __int64 v9; // r8
  _QWORD *v10; // rdx
  _QWORD *v11; // rcx
  _QWORD *v12; // r9
  int PatternEffectivePriority; // eax
  __int64 v14; // r8
  __int64 v15; // rcx
  _QWORD *v16; // rcx
  int v17; // eax
  __int64 v18; // rcx

  OidSourceHandle = ndisGetOidSourceHandle(a2);
  v5 = (__int64 *)(v4 + 968);
  v6 = OidSourceHandle;
  v7 = *v5;
  v8 = **(_DWORD **)(v3 + 40);
  if ( *v5 )
  {
    do
    {
      v9 = v7;
      if ( *(_DWORD *)(v7 + 196) == v8 )
        break;
      v5 = (__int64 *)v7;
      v9 = 0LL;
      v7 = *(_QWORD *)v7;
    }
    while ( v7 );
    if ( v9 )
    {
      v10 = 0LL;
      v11 = (_QWORD *)(v9 + 8);
      if ( v9 != -8 )
      {
        do
        {
          v12 = v11 - 1;
          if ( v11[2] == v6 )
            break;
          v10 = v11;
          v12 = 0LL;
          v11 = (_QWORD *)*v11;
        }
        while ( v11 );
        if ( v12 )
        {
          if ( v10 )
          {
            *v10 = *v11;
            PatternEffectivePriority = ndisGetPatternEffectivePriority(v9);
            *(_DWORD *)(v14 + 36) = PatternEffectivePriority;
          }
          else
          {
            v15 = *v11;
            if ( v15 )
            {
              v16 = (_QWORD *)(v15 - 8);
              *v5 = (__int64)v16;
              *v16 = *(_QWORD *)v7;
              v17 = ndisGetPatternEffectivePriority((__int64)v16);
              *(_DWORD *)(v18 + 36) = v17;
            }
            else
            {
              *v5 = *(_QWORD *)v7;
            }
          }
          ExFreePoolWithTag(v12, 0);
        }
      }
    }
  }
}
