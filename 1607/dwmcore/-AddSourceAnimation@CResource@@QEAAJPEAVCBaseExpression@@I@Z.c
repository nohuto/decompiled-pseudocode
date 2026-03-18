/*
 * XREFs of ?AddSourceAnimation@CResource@@QEAAJPEAVCBaseExpression@@I@Z @ 0x18008DB70
 * Callers:
 *     ?RegisterSourceForAnimation@CExpression@@AEAAJPEAVCBaseExpression@@PEBUExpressionReferenceInfo@@@Z @ 0x18008B648 (-RegisterSourceForAnimation@CExpression@@AEAAJPEAVCBaseExpression@@PEBUExpressionReferenceInfo@@.c)
 *     ?ProcessSetReferenceInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETREFERENCEINFO@@PEBXI@Z @ 0x18008BBF0 (-ProcessSetReferenceInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETREFERENC.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CAnimationSourceMapEntry@@QEAA@XZ @ 0x18011E2B0 (--1CAnimationSourceMapEntry@@QEAA@XZ.c)
 */

__int64 __fastcall CResource::AddSourceAnimation(CResource *this, struct CBaseExpression *a2, int a3)
{
  struct _RTL_GENERIC_TABLE *v3; // r14
  unsigned int v5; // ebx
  _QWORD *inserted; // rdi
  __int64 i; // rax
  _QWORD *v9; // rax
  int Buffer; // [rsp+30h] [rbp-38h] BYREF
  __int64 v12; // [rsp+38h] [rbp-30h]
  int v13; // [rsp+40h] [rbp-28h] BYREF
  __int64 v14; // [rsp+48h] [rbp-20h]
  unsigned __int8 NewElement; // [rsp+80h] [rbp+18h] BYREF

  v3 = (struct _RTL_GENERIC_TABLE *)((char *)this + 40);
  v13 = a3;
  v5 = 0;
  v14 = 0LL;
  inserted = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 40), &v13);
  CAnimationSourceMapEntry::~CAnimationSourceMapEntry((CAnimationSourceMapEntry *)&v13);
  if ( !inserted )
  {
    v12 = 0LL;
    Buffer = a3;
    inserted = RtlInsertElementGenericTable(v3, &Buffer, 0x10u, &NewElement);
    if ( !inserted )
    {
      v5 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xE1u);
      CAnimationSourceMapEntry::~CAnimationSourceMapEntry((CAnimationSourceMapEntry *)&Buffer);
      return v5;
    }
    CAnimationSourceMapEntry::~CAnimationSourceMapEntry((CAnimationSourceMapEntry *)&Buffer);
  }
  for ( i = inserted[1]; i; i = *(_QWORD *)(i + 8) )
  {
    if ( *(struct CBaseExpression **)i == a2 )
      return v5;
  }
  v9 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                   WPF::g_pProcessHeap,
                   16LL);
  if ( v9 )
  {
    *v9 = 0LL;
    v9[1] = 0LL;
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    *v9 = a2;
    v9[1] = inserted[1];
    inserted[1] = v9;
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xFFu);
  }
  return v5;
}
