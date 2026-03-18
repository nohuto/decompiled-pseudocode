/*
 * XREFs of ?DxgkEngAssertGdiOutput@@YAHQEBXPEBEIPEAE@Z @ 0x1C007E850
 * Callers:
 *     <none>
 * Callees:
 *     hdevEnumerate @ 0x1C0034350 (hdevEnumerate.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

_BOOL8 __fastcall DxgkEngAssertGdiOutput(
        struct _LIST_ENTRY *a1,
        const unsigned __int8 *a2,
        __int64 a3,
        unsigned __int8 *a4)
{
  int v4; // ebp
  unsigned int v6; // r15d
  unsigned __int8 v9; // si
  struct _LIST_ENTRY *v10; // rcx
  BOOL v11; // edi
  struct _LIST_ENTRY *v12; // rax
  struct _LIST_ENTRY *v13; // rbx
  struct _LIST_ENTRY *Blink; // rax
  __int64 Flink_low; // rcx
  struct _LIST_ENTRY *Flink; // rax
  int v17; // eax
  int v18; // edx
  struct _LIST_ENTRY *v19; // rbx
  int v20; // r8d
  struct _LIST_ENTRY *v21; // rax
  __int64 v22; // rcx
  _BOOL8 result; // rax
  __int64 v24; // rax
  struct _LIST_ENTRY *v25; // rax

  v4 = 0;
  v6 = a3;
  if ( gOldModeChange )
  {
    v24 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v24);
  }
  v9 = 1;
  v10 = 0LL;
  v11 = 1;
  while ( 1 )
  {
    v12 = hdevEnumerate(v10, (int)a2, a3);
    v13 = v12;
    if ( !v12 )
      break;
    if ( ((__int64)v12[3].Blink & 0x20400) == 0 )
    {
      Blink = v12[162].Blink;
      if ( Blink[16].Flink == a1 )
      {
        Flink_low = LODWORD(Blink[17].Flink);
        if ( (unsigned int)Flink_low < v6 )
        {
          if ( a2[Flink_low] )
            LODWORD(v13[165].Flink) = -2147483646;
          else
            LODWORD(v13[165].Flink) = -2147483645;
          Flink = v13[172].Flink;
          if ( Flink )
            v17 = ((__int64 (__fastcall *)(struct _LIST_ENTRY *, _QWORD))Flink)(v13[114].Flink, 0LL);
          else
            v17 = 0;
          LODWORD(v13[165].Flink) = 0;
          if ( !v11 || (v11 = 1, !v17) )
            v11 = 0;
        }
      }
    }
    v10 = v13;
  }
  v19 = hdevEnumerate(0LL, (int)a2, a3);
  if ( !v19 )
    goto LABEL_22;
  do
  {
    if ( ((__int64)v19[3].Blink & 0x20400) == 0 )
    {
      v21 = v19[162].Blink;
      if ( v21[16].Flink == a1 )
      {
        v22 = LODWORD(v21[17].Flink);
        if ( (unsigned int)v22 < v6 )
        {
          if ( a2[v22] )
          {
            LODWORD(v19[165].Flink) = 0x80000000;
            v25 = v19[172].Flink;
            if ( v25 )
              LODWORD(v25) = ((__int64 (__fastcall *)(struct _LIST_ENTRY *, __int64))v25)(v19[114].Flink, 1LL);
            LODWORD(v19[165].Flink) = 0;
            v11 = v11 && (_DWORD)v25;
            v4 = 1;
          }
        }
      }
    }
    v19 = hdevEnumerate(v19, v18, v20);
  }
  while ( v19 );
  if ( !v4 )
LABEL_22:
    v9 = 0;
  result = v11;
  *a4 = v9;
  return result;
}
