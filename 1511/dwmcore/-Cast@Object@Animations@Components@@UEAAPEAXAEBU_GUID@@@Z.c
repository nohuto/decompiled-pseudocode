/*
 * XREFs of ?Cast@Object@Animations@Components@@UEAAPEAXAEBU_GUID@@@Z @ 0x180163760
 * Callers:
 *     ?Cast@Animation@Animations@Components@@UEAAPEAXAEBU_GUID@@@Z @ 0x180161D80 (-Cast@Animation@Animations@Components@@UEAAPEAXAEBU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

Components::Animations::Object *__fastcall Components::Animations::Object::Cast(
        Components::Animations::Object *this,
        const struct _GUID *a2)
{
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v6; // rcx

  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_de97a223_c381_4ae7_a7a2_7148cf032ff8.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_de97a223_c381_4ae7_a7a2_7148cf032ff8.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_de97a223_c381_4ae7_a7a2_7148cf032ff8.Data4;
  v4 = 0LL;
  if ( !v3 )
    return this;
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_40bcc659_94a7_4e92_af7a_1a3641cc6662.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_40bcc659_94a7_4e92_af7a_1a3641cc6662.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_40bcc659_94a7_4e92_af7a_1a3641cc6662.Data4;
  if ( !v6 )
    return this;
  return (Components::Animations::Object *)v4;
}
