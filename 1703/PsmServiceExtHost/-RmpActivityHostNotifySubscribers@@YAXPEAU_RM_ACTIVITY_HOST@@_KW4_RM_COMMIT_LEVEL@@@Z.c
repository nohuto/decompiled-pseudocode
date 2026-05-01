/*
 * XREFs of ?RmpActivityHostNotifySubscribers@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z @ 0x18001AB0C
 * Callers:
 *     ?RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z @ 0x18000B0A0 (-RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z.c)
 * Callees:
 *     ?RmpActivatorPublishHostMesssage@@YAXPEAU_RM_ACTIVATOR@@PEAU_RM_ACTIVITY_HOST_CALLBACK_PAYLOAD@@@Z @ 0x18001AC00 (-RmpActivatorPublishHostMesssage@@YAXPEAU_RM_ACTIVATOR@@PEAU_RM_ACTIVITY_HOST_CALLBACK_PAYLOAD@@.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 */

void __fastcall RmpActivityHostNotifySubscribers(_QWORD *a1, __int64 a2, int a3)
{
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  __int64 v8; // rbp
  int v9; // r14d
  _QWORD *v10; // r12
  _QWORD *i; // r15
  struct _RM_ACTIVATOR *v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rax
  _QWORD v15[3]; // [rsp+20h] [rbp-58h] BYREF
  int v16; // [rsp+38h] [rbp-40h]
  __int64 v17; // [rsp+40h] [rbp-38h]
  __int64 v18; // [rsp+48h] [rbp-30h]

  v5 = a3 - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 != 1 )
          return;
        v8 = a1[121];
        v9 = 5;
      }
      else
      {
        v8 = a1[120];
        v9 = 4;
      }
    }
    else
    {
      v8 = a1[119];
      v9 = 3;
    }
  }
  else
  {
    v8 = 0LL;
    v9 = 2;
  }
  v10 = a1 + 133;
  for ( i = (_QWORD *)a1[133]; i != v10; i = (_QWORD *)*i )
  {
    v12 = (struct _RM_ACTIVATOR *)i[6];
    v13 = *(i - 1);
    memset_0(v15, 0, 0x30uLL);
    v14 = a1[3];
    v15[2] = 0LL;
    v15[0] = v14;
    v15[1] = v13;
    v16 = v9;
    v17 = v8;
    v18 = a2;
    RmpActivatorPublishHostMesssage(v12, (struct _RM_ACTIVITY_HOST_CALLBACK_PAYLOAD *)v15);
  }
}
