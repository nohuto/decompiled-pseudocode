/*
 * XREFs of PerfControlPTStatesHiddenSwAll @ 0x1C0004960
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00067E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PerfControlPTStatesHiddenSwAll(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        char a8)
{
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rsi
  int v13; // ecx
  int v14; // eax
  __int64 v15; // r8
  _QWORD *v16; // r8
  unsigned int v17; // r10d
  unsigned int v18; // r10d

  if ( a8 )
  {
    *(_DWORD *)(a1 + 8) = 0;
    return;
  }
  v10 = *(_QWORD *)(a1 + 24);
  v11 = *(_QWORD *)(v10 + 48);
  v12 = v11 + 32LL * a2;
  v13 = *(unsigned __int8 *)(v12 + 25);
  if ( *(_DWORD *)(a1 + 8) != v13 )
  {
    if ( v13 == 1 )
    {
      if ( *(_DWORD *)(v10 + 64) )
      {
        v15 = *(unsigned int *)(v10 + 60);
LABEL_9:
        v16 = (_QWORD *)(v11 + 32 * v15);
        if ( v16 )
        {
          v17 = *(_DWORD *)(*(_QWORD *)a1 + 68LL);
          if ( *((_BYTE *)v16 + 25) == 1 )
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v10 + 24))(
              v17,
              *(_QWORD *)(v10 + 32),
              *v16,
              v16[1]);
          else
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v10 + 16))(
              v17,
              *(_QWORD *)(v10 + 40),
              *v16,
              v16[1]);
        }
      }
    }
    else
    {
      v14 = *(_DWORD *)(v10 + 60);
      if ( v14 )
      {
        v15 = (unsigned int)(v14 - 1);
        goto LABEL_9;
      }
    }
  }
  v18 = *(_DWORD *)(*(_QWORD *)a1 + 68LL);
  if ( *(_BYTE *)(v12 + 25) == 1 )
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v10 + 24))(
      v18,
      *(_QWORD *)(v10 + 32),
      *(_QWORD *)v12,
      *(_QWORD *)(v12 + 8));
  else
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v10 + 16))(
      v18,
      *(_QWORD *)(v10 + 40),
      *(_QWORD *)v12,
      *(_QWORD *)(v12 + 8));
  *(_DWORD *)(a1 + 16) = a2;
  *(_DWORD *)(a1 + 8) = *(unsigned __int8 *)(v12 + 25);
  *(_DWORD *)(a1 + 12) = *(unsigned __int8 *)(v12 + 24);
}
