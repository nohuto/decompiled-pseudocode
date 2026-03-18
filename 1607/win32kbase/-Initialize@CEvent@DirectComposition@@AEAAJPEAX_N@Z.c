/*
 * XREFs of ?Initialize@CEvent@DirectComposition@@AEAAJPEAX_N@Z @ 0x1C007A3E0
 * Callers:
 *     ?Create@CEvent@DirectComposition@@SAJPEAXPEAPEAV12@@Z @ 0x1C007A2B4 (-Create@CEvent@DirectComposition@@SAJPEAXPEAPEAV12@@Z.c)
 *     ?Create@CEvent@DirectComposition@@SAJW4_EVENT_TYPE@@PEAPEAV12@@Z @ 0x1C007A314 (-Create@CEvent@DirectComposition@@SAJW4_EVENT_TYPE@@PEAPEAV12@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall DirectComposition::CEvent::Initialize(DirectComposition::CEvent *this, void *a2, char a3)
{
  NTSTATUS result; // eax
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  result = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)ExEventObjectType, a3 == 0, &Object, 0LL);
  *(_QWORD *)this = Object;
  return result;
}
