/*
 * XREFs of ??1?$SmartPtr@VSequence@Animations@Components@@@Animations@Components@@QEAA@XZ @ 0x180153900
 * Callers:
 *     ?Create@Sequence@Animations@Components@@SAJPEAPEAV123@@Z @ 0x18015676C (-Create@Sequence@Animations@Components@@SAJPEAPEAV123@@Z.c)
 * Callees:
 *     ??_GSequence@Animations@Components@@QEAAPEAXI@Z @ 0x1801539DC (--_GSequence@Animations@Components@@QEAAPEAXI@Z.c)
 */

void *__fastcall Components::Animations::SmartPtr<Components::Animations::Sequence>::~SmartPtr<Components::Animations::Sequence>(
        Components::Animations::Sequence **a1,
        unsigned int a2)
{
  Components::Animations::Sequence *v2; // rcx
  void *result; // rax

  v2 = *a1;
  if ( v2 )
    return Components::Animations::Sequence::`scalar deleting destructor'(v2, a2);
  return result;
}
