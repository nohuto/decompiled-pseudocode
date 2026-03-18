/*
 * XREFs of NtGdiBRUSHOBJ_DeleteRbrush @ 0x1402305D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D7634 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D767C (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1400D89EC (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 */

__int64 __fastcall NtGdiBRUSHOBJ_DeleteRbrush(__int64 a1, __int64 a2)
{
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v5; // rbp
  unsigned int v6; // ebx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdi
  void *v9; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdi
  void *v13; // rcx
  UMPDOBJ *v14[4]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v15; // [rsp+40h] [rbp-48h]

  CurrentThread = GreGetCurrentThread(a1);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v14, CurrentThread);
  v5 = v15;
  v6 = 0;
  if ( v15 )
  {
    if ( a1 )
    {
      v7 = UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(v15, a1);
      v8 = v7;
      if ( v7 )
      {
        v9 = *(void **)(v7 + 8);
        if ( v9 )
        {
          if ( !GrepIsEngineVa(v9) )
          {
            EngFreeUserMem((PVOID)(*(_QWORD *)(v8 + 8) - 16LL));
            *(_QWORD *)(v8 + 8) = 0LL;
          }
        }
      }
    }
    if ( a2 )
    {
      v11 = UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(v5, a2);
      v12 = v11;
      if ( v11 )
      {
        v13 = *(void **)(v11 + 8);
        if ( v13 )
        {
          if ( !GrepIsEngineVa(v13) )
          {
            EngFreeUserMem((PVOID)(*(_QWORD *)(v12 + 8) - 16LL));
            *(_QWORD *)(v12 + 8) = 0LL;
          }
        }
      }
    }
    v6 = 1;
  }
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v14);
  return v6;
}
