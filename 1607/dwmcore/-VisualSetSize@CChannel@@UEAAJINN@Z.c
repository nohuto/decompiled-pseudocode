/*
 * XREFs of ?VisualSetSize@CChannel@@UEAAJINN@Z @ 0x180049A90
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18004AA04 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x18004C360 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 */

__int64 __fastcall CChannel::VisualSetSize(CDataStreamWriter **this, int a2, double a3, double a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  _DWORD v10[2]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v11[3]; // [rsp+38h] [rbp-40h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(this + 22);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 22));
  v10[0] = 45;
  *(double *)v11 = a3;
  *(double *)&v11[1] = a4;
  v10[1] = a2;
  v7 = CChannel::BeginCommand((CChannel *)this, v10, 0x18u, 0);
  v8 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x7Au);
  else
    CDataStreamWriter::EndItem(this[21]);
  if ( v4 )
    LeaveCriticalSection(v4);
  return v8;
}
